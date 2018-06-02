const int LED = 13; // LED at 13

int val = 0; // Store input from sensor

void setup() {

pinMode(LED, OUTPUT); // LED is an output
// Note that analogue pins are automatically set as inputs.

}

void loop() {

val = analogRead(0); // Read value from sensor

digitalWrite(LED, HIGH);

delay(val); // delay program

digitalWrite(LED, LOW);

delay(val);

}
