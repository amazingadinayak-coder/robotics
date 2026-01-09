int i = 1;

void setup() {
  Serial.begin(9600);
}
void loop() {
   int i = 1;
   while( i <= 10) {
    Serial.print("17 x ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(17 * i);
    i = i + 1;
    delay(1000);
  }
  delay(3000);
}
