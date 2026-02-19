void setup() {

  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);

  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {

    String command = Serial.readStringUntil('\n');
    command.trim();

    if (command == "fast") {
      analogWrite(9, 255);
      analogWrite(5, 255);
      digitalWrite(8, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(3, LOW);
    }

    else if (command == "slow") {
      analogWrite(9, 100);
      analogWrite(5, 100);
      digitalWrite(8, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(3, LOW);
    }

    else if (command == "on") {
      analogWrite(9, 255);
      analogWrite(5, 255);
      digitalWrite(8, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(3, LOW);
    }

    else if (command == "off") {
      analogWrite(9, 0);
      analogWrite(5, 0);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);
    }
  }
}
