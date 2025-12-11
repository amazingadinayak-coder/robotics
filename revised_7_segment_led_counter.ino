void setup() {
  DDRD = 0B11111111;  // Set PORTD as output
}

byte patterns[] = {
  0B00000110, // 1
  0B01011011, // 2
  0B01001111, // 3
  0B01100110, // 4
  0B01101101, // 5
  0B01111101, // 6
  0B00000111, // 7
  0B11111111, // 8
  0B01101111, // 9
  0B01110111, // A
  0B01111100, // B
  0B00111001, // C
  0B01011110, // D
  0B01111001, // E
  0B01110001  // F
};

void loop() {
  for (int i = 0; i < sizeof(patterns); i++) {
    PORTD = patterns[i];
    delay(1000);
  }
}
