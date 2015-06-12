#include <Servo.h>

Servo xAxis;

int Y = 0;
int X = 1;
int value1 = 0;
int value2 = 0;
 
void setup() {
  xAxis.attach(9);
  xAxis.write(81);  
  Serial.begin(9600);
}

void loop() {
  //joyRead();
  //xAxisMotor();
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
  xAxis.write(value2);  
}
