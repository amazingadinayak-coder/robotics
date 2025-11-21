void setup() {
 
DDRD=0xFF;
}

void loop() {
  // put your main code here, to run repeatedly:
  PORTD=0x00;
  delay(1000);
  PORTD=0x10;
  delay(1000);
  PORTD=0x20;
  delay(1000);
  PORTD=0x30;
  delay(1000);
  PORTD=0x40;
  delay(1000);
  PORTD=0x50;
  delay(1000);
  PORTD=0x60;
  delay(1000);
  PORTD=0x70;
  delay(1000);
  PORTD=0x80;
  delay(1000);
  PORTD=0x90;
  delay(1000);
  PORTD=0xa0;
  delay(1000);
    PORTD=0xB0;
  delay(1000);
    PORTD=0xc0;
  delay(1000);
    PORTD=0xD0;
  delay(1000);
    PORTD=0xE0;
  delay(1000);
    PORTD=0xF0;
  delay(1000);
}
