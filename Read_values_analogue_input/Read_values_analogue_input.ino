const int SENSOR = 0; // Input pin for sensor resistor

int val = 0; // Store value

void setup() {

Serial.begin(9600); // Open serial port, send data back to computer at 9600 bps
}

void loop() {

val = analogRead(SENSOR); //Read sensor value

Serial.println(val); // Print value back to serial port

delay(100); // Waits 100ms between each send

}
