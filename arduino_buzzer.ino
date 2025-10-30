const int BUZZER_PIN = 9;  // Connect your buzzer here
int frequency = 200;       // Starting frequency in Hz
int fadeAmount = 5;        // How much to change frequency each step
int maxFrequency = 50000;   // Highest pitch
int minFrequency = 200;    // Lowest pitch

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  tone(BUZZER_PIN, frequency);  // Play current frequency
  delay(25);

  frequency = frequency + fadeAmount;

  // Reverse direction at the limits
  if (frequency <= minFrequency || frequency >= maxFrequency) {
    fadeAmount = -fadeAmount;
  }
}
