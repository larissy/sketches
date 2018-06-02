
const int LED = 9; // LED at 9
const int BTN = 7; // Button at 7

int val = 0; // Store state of input pin
int old_val = 0; // Store old state of input pin
int state = 0; // 0 when LED off, 1 when LED on
int brightness = 128; // Stores brightness value
unsigned long startTime = 0; // timer for when press begins

void setup() {

pinMode(LED, OUTPUT);
pinMode(BTN, INPUT);

}

void loop() {

val = digitalRead(BTN);

if ((val == HIGH) && (old_val == LOW)) {
  state = 1 - state;
  startTime = millis(); // Arduino clock, counts time since board reset
  delay(10);
  }

if((val == HIGH) && (old_val == HIGH)){
  
  // If button held for more than 500ms
  if ((state == 1) && (millis() - startTime) > 500) {
   
    brightness++; // Increments brightness by 1
    delay(10);

    if(brightness > 255){ 
      brightness = 0; // Resets brightness to 0 after reaching maximum
      }
    }
  }

old_val = val;

if (state == 1){
  analogWrite(LED, brightness); // Turns LED on to current brightness level
  } else {
  analogWrite(LED, 0); // Turns LED off
  }
}
