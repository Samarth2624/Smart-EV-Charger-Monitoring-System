#define BLYNK_TEMPLATE_ID "TMPL3F1CYqzi7"
#define BLYNK_TEMPLATE_NAME "SMART EV"
#define BLYNK_AUTH_TOKEN "QN3QIxbs5gBQLIlB-EpRFmdGgwDd1ed5"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// WiFi
char ssid[] = "Vivo1920";
char pass[] = "8623990668";

// Pins
#define VOLTAGE_PIN 34
#define CURRENT_PIN 35
#define RELAY_PIN 5

// Relay Logic
#define RELAY_ON  LOW
#define RELAY_OFF HIGH

// Calibration
float voltageOffset = 2.5;
float voltageMultiplier = 460;

float currentOffset = 2.5;
float sensitivity = 0.185;

// Variables
float voltage = 0;
float current = 0;
float power = 0;

// Relay State
bool relayState = 0;

BlynkTimer timer;

// 🔘 Relay Button from Blynk (V3)
BLYNK_WRITE(V3) {

  relayState = param.asInt();

  if (relayState == 1) {
    digitalWrite(RELAY_PIN, RELAY_ON);
    Serial.println("Relay ON");
  } 
  else {
    digitalWrite(RELAY_PIN, RELAY_OFF);
    Serial.println("Relay OFF");
  }
}

// 🔌 Voltage Reading
float readVoltage() {

  long sum = 0;

  for (int i = 0; i < 200; i++) {
    sum += analogRead(VOLTAGE_PIN);
  }

  float avg = sum / 200.0;

  float v = (avg / 4095.0) * 3.3;

  float voltage = abs((v - voltageOffset) * voltageMultiplier);

  // Noise filter
  if (voltage < 5) voltage = 0;

  return voltage;
}

// 🔌 Current Reading
float readCurrent() {

  long sum = 0;

  for (int i = 0; i < 200; i++) {
    sum += analogRead(CURRENT_PIN);
  }

  float avg = sum / 200.0;

  float v = (avg / 4095.0) * 3.3;

  float current = abs((v - currentOffset) / sensitivity);

  // Noise filter
  if (current < 0.05) current = 0;

  return current;
}

// 📡 Send Data to Serial + Blynk
void sendData() {

  // Read Sensors
  voltage = readVoltage();
  current = readCurrent();

  // ⚡ Power Calculation
  power = voltage * current;

  // Serial Monitor
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print(" V | Current: ");
  Serial.print(current);
  Serial.print(" A | Power: ");
  Serial.print(power);
  Serial.println(" W");

  // Send to Blynk
  Blynk.virtualWrite(V0, voltage);
  Blynk.virtualWrite(V1, current);
  Blynk.virtualWrite(V2, power);
}

void setup() {

  Serial.begin(115200);

  // Relay
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, RELAY_OFF);

  // Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  // Timer
  timer.setInterval(2000L, sendData);

  Serial.println("EV Charger Monitoring Started");
}

void loop() {

  Blynk.run();
  timer.run();
}
