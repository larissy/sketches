
const int LED = 13; // LED at 13
const int BTN = 7; // Button at 7

int val = 0; // Store state of input pin

int old_val = 0; // Store old state of input pin

int state = 0; // 0 when LED off, 1 when LED on

void setup() {

pinMode(LED, OUTPUT);
pinMode(BTN, INPUT);

}

void loop() {

val = digitalRead(BTN);

if ((val == HIGH) && (old_val == LOW)) {
  state = 1 - state;
  }

if((val == LOW) && (old_val == HIGH)){
  delay(10);
  }

old_val = val;

if (state == 1){
  digitalWrite(LED, HIGH);
  } else {
  digitalWrite(LED, LOW);
  }
}
