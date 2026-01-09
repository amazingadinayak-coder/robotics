#define L D4

void setup() {
  pinMode(L, OUTPUT);
}

void loop() {
  for(int i=0;i<255;i++){analogWrite(L,i);delay(1);}
  for(int i=255;i>0;i--){analogWrite(L,i);delay(1);}
}
