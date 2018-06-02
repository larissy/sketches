
const int LED = 13; // LED at 13
const int LDR = 7; // Button at 7

int val = 0; // Store state of input pin

void setup() {

pinMode(LED, OUTPUT);
pinMode(LDR, INPUT);

}

void loop() {

val = digitalRead(LDR);

if (val == HIGH){
  digitalWrite(LED, HIGH);
  } else {
  digitalWrite(LED, LOW);
  }
}
