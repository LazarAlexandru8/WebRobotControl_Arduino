#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();


int x;
int z;
String y;
String receivedString = "";
void setup() 
{ 
  Serial.begin(9600);
  pwm.begin();
  pwm.setPWMFreq(60);
  
}

void loop() {
  
if (Serial.available() > 0 ) {
    

      receivedString = Serial.readString();
    if(receivedString.charAt(0) == '#' and receivedString.charAt(1) == '1'){
      Serial.println("Servo 1 selectat");
     while(1){
      if(receivedString.charAt(0) == '#' and receivedString.charAt(1) != '1'){
        Serial.println("Servo 1 iesire");
        break;
        }
      receivedString = Serial.readString();  
      receivedString.trim();
      x = receivedString.toInt();
      if(x!=0){
      z = map(x, 0, 100, 575, 350);
      delay(50);
      Serial.print("Servo 1 miscat la poz:"); Serial.println(x);
      pwm.setPWM(3, 0, z);}  
      } 
    }
    if(receivedString.charAt(0) == '#' and receivedString.charAt(1) == '2'){
      Serial.println("Servo 2 selectat");
     while(1){
      if(receivedString.charAt(0) == '#' and receivedString.charAt(1) != '2'){
        Serial.println("Servo 2 iesire");
        break;
        }
      receivedString = Serial.readString();  
      receivedString.trim();
      x = receivedString.toInt();
      if(x!=0){
      z = map(x, 0, 100, 575, 350);
      delay(50);
      Serial.print("Servo 2 miscat la poz:"); Serial.println(x);
      pwm.setPWM(1, 0, z);}  
      } 
    }
    if(receivedString.charAt(0) == '#' and receivedString.charAt(1) == '3'){
      Serial.println("Servo 3 selectat");
     while(1){
      if(receivedString.charAt(0) == '#' and receivedString.charAt(1) != '3'){
        Serial.println("Servo 3 iesire");
        break;
        }
      receivedString = Serial.readString();  
      receivedString.trim();
      x = receivedString.toInt();
      if(x!=0){
      z = map(x, 0, 100, 575, 350);
      delay(50);
      Serial.print("Servo 3 miscat la poz:"); Serial.println(x);
      pwm.setPWM(6, 0, z);}  
      } 
    }
    if(receivedString.charAt(0) == '#' and receivedString.charAt(1) == '4'){
      Serial.println("Servo 4 selectat");
     while(1){
      if(receivedString.charAt(0) == '#' and receivedString.charAt(1) != '4'){
        Serial.println("Servo 4 iesire");
        break;
        }
      receivedString = Serial.readString();  
      receivedString.trim();
      x = receivedString.toInt();
      if(x!=0){
      z = map(x, 0, 100, 525, 350);
      delay(50);
      Serial.print("Servo 4 miscat la poz:"); Serial.println(x);
      pwm.setPWM(8, 0, z);  }  
      } 
    }
    if(receivedString.charAt(0) == '#' and receivedString.charAt(1) == '5'){
      Serial.println("Servo 5 selectat");
     while(1){
      if(receivedString.charAt(0) == '#' and receivedString.charAt(1) != '5'){
        Serial.println("Servo 5 iesire");
        break;
        }
      receivedString = Serial.readString();  
      receivedString.trim();
      x = receivedString.toInt();
      if(x!=0){
      z = map(x, 0, 100, 300, 100);
      delay(50);
      Serial.print("Servo 5 miscat la poz:"); Serial.println(x);
      pwm.setPWM(9, 0, z);  }  
      } 
    }
    if(receivedString.charAt(0) == '#' and receivedString.charAt(1) == '6'){
      Serial.println("Servo 6 selectat");
     while(1){
      if(receivedString.charAt(0) == '#' and receivedString.charAt(1) != '6'){
        Serial.println("Servo 6 iesire");
        break;
        }
      receivedString = Serial.readString();  
      receivedString.trim();
      x = receivedString.toInt();
      if(x!=0){
      z = map(x, 0, 100, 625, 100);
      delay(50);
      Serial.print("Servo 6 miscat la poz:"); Serial.println(x);
      pwm.setPWM(11, 0, z);}  
      } 
    }
  }
}
