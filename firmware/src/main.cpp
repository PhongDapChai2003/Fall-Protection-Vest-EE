#include <Arduino.h>

// Change this only after checking the exact ESP32-S3 board wiring.
constexpr int SAFE_TEST_OUTPUT_PIN = 4;

void setup() {
  pinMode(SAFE_TEST_OUTPUT_PIN, OUTPUT);
  digitalWrite(SAFE_TEST_OUTPUT_PIN, LOW);

  Serial.begin(115200);
  delay(1000);
  Serial.println("Fall Protection Vest firmware starter");
  Serial.println("Safe test output is OFF");
}

void loop() {
  // Add IMU reading and tested fall-detection logic here.
  // Keep the real inflation device disconnected during development.
  Serial.println("System running - no trigger action");
  delay(1000);
}

