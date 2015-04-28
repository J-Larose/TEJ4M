int motor_left[]={2,3};
int motor_right[]={7,8};

void setup(){
  Serial.begin(9600);
  
  int i;
  for (i=0; i<2; i++){
    pinMode(motor_left[i], OUTPUT);
    pinMode(motor_right[i], OUTPUT);
  }
}

void loop(){
  drive_forward();
  Serial.println("Forward Charge");
  delay(1000);
  motor_stop();
  
  
  drive_backward();
  Serial.println("full reverse");
  delay(1000);
  motor_stop();
  
  
  turn_left();
  Serial.println("Company Left");
  delay(1000);
  motor_stop();
  
  turn_right();
  Serial.println("Company Right");
  delay(1000);
  motor_stop();
  
  
  motor_stop();
  Serial.println("FUll HALT");
  delay(1000);
  motor_stop();
}

void motor_stop(){
  digitalWrite(motor_left[0], LOW);
  digitalWrite(motor_left[1], LOW);
  digitalWrite(motor_right[0], LOW);
  digitalWrite(motor_right[1], LOW);
}
void drive_forward(){
  digitalWrite(motor_left[0], HIGH);
  digitalWrite(motor_left[1], LOW);
  digitalWrite(motor_right[0], HIGH);
  digitalWrite(motor_right[1], LOW);
}
void drive_backward(){
  digitalWrite(motor_left[0], LOW);
  digitalWrite(motor_left[1], HIGH);
  digitalWrite(motor_right[0], LOW);
  digitalWrite(motor_right[1], HIGH);
}
void turn_left(){
  digitalWrite(motor_left[0], LOW);
  digitalWrite(motor_left[1], HIGH);
  digitalWrite(motor_right[0], HIGH);
  digitalWrite(motor_right[1], LOW);
}
void turn_right(){
  digitalWrite(motor_left[0], HIGH);
  digitalWrite(motor_left[1], LOW);
  digitalWrite(motor_right[0], LOW);
  digitalWrite(motor_right[1], HIGH);
}

