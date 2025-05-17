#include <Servo.h>

Servo myServo;  // Maak een servo-object aan

void setup() {
  myServo.attach(6);  // Sluit de servo aan op pin 6 
  myServo.write(0);
}

void loop() {
  // Beweeg van 0 naar 180 graden
  for (int pos = 100; pos <= 160; pos++) {
    myServo.write(pos);   // Zet de hoek
    delay(10);            // Kleine pauze voor vloeiende beweging
  }
  
  // Beweeg van 180 terug naar 0 graden
  for (int pos = 160; pos >= 100; pos--) {
    myServo.write(pos);   // Zet de hoek
    delay(10);            // Kleine pauze voor vloeiende beweging
  }
}
