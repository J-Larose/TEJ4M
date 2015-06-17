#include <Servo.h>

Servo xAxis;

int Y = 0;
int X = 1;
int value1 = 0;
int value2 = 0;
const int trigPin = 2;
const int echoPin = 4;
long duration, inches;
boolean high = true;

 
void setup() {
  xAxis.attach(9);
  xAxis.write(90);  
  Serial.begin(9600);
}

void loop() {
  joyRead();
  checkClose();
  xAxisMotor();
  delay(50);
}

void joyRead() {
  value1 = analogRead(Y);  
  delay(100);            
  value2 = analogRead(X);  
  
  
  Serial.print(value1);
  Serial.print("   ");
  Serial.println(value2);
}

void xAxisMotor(){
  if (inches<4){
    xAxis.write(90);
  }else{
    if (value2 >400){
      xAxis.write(180); 
    }else if (value2 <300){
      xAxis.write(0);
    }else {
      xAxis.write(90);
    }  
  }  
}

void checkClose(){
 /*
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  // convert the time into a distance
  inches = microsecondsToInches(duration);
  
  Serial.print(inches);
  Serial.print("in, ");
  */
  Serial.println(analogRead(5));
  
  if (analogRead(5)>1000){
    inches=1;
    Serial.println ("HIHG");
    while (analogRead(5)>1000){
      xAxis.write(180);
    }
  }else{
    inches=6;
    Serial.println ("LOW");
  }

}
 
long microsecondsToInches(long microseconds)
{
  return microseconds / 74 / 2;
}
