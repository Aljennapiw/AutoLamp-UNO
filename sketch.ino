const int ldrPin = A0;
const int ledPin = 8;

const int threshold = 400;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop() {
  int nilaiCahaya = analogRead(ldrPin);

  if (nilaiCahaya < threshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(200);
}