const int LED = 9; // LED at 9 this time!
int i = 0; // For iteration

void setup() {
pinMode(LED, OUTPUT);
}

void loop() {

for (i = 0; i < 255; i++) { // Loops *up* through LED brightness
  analogWrite(LED, i); 
  delay(10); // So puny human eye can observe change
  }

for (i = 255; i > 0; i--) { // Loops *down* through LED brightness
  analogWrite(LED, i);
  delay(10);
  }  
}

