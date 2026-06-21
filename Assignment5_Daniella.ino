 //Create variable and set to 5

int startValue = 5;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  
  Serial.println("===Smart Countdown Starting===");
  int count = startValue;
  
     while (startValue >= 1) {
      // 5. Print count, flash LED 'count' times, wait 1 sec
      Serial.print(count);
      flashLED(count);
      delay(1000);
      count --;


     }
     //Print completion message
     Serial.println("===Countdown Complete===");
}

void loop() {
  // nothing here - all logic runs once in setup


}

//flashLED function:blinks LED on pin 13
void flashLED(int times) {
   for (int i =0; i < times; i++) {
      digitalWrite(13, HIGH);
      delay(200);
      digitalWrite(13, LOW);
      delay(200);
   }
}
