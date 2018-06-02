const int LED = 9; // LED at 9

int val = 0; // Store input from sensor

void setup() {

pinMode(LED, OUTPUT); // LED is an output
// Note that analogue pins are automatically set as inputs.

}

void loop() {

val = analogRead(0); // Read value from sensor

analogWrite(LED, 255 - val/4); // Turn LED on at brightness set by sensor
// Divided by 4 as the maximum brightness is 255, and maximum sensor value is 1023


delay(10);

}
