#define LED1 1
#define LED2 2
#define LED3 3
#define LED4 4

void setup() {
  randomSeed(analogRead(0));
  Serial.begin(9600);
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}


void loop() {
  int number=random(1, 7);
  Serial.println("take your guess:");
  if (Serial.available()>0){
    
    int guess=Serial.read();
    Serial.print ("You typed:");
    Serial.print (guess, DEC);
    Serial.print (" the number was ");
    Serial.println(number);
    /*
    switch (number){
      case 1:
        digitalWrite(LED1,HIGH);
        break;
      case 2:
        digitalWrite(LED2,HIGH);
        break;
      case 3:
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        break;
      case 4:
        digitalWrite(LED2,HIGH);
        digitalWrite(LED3,HIGH);
        break;
      case 5:
        digitalWrite(LED2,HIGH);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,HIGH);
        break;
      case 6:
        digitalWrite(LED4,HIGH);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED2,HIGH);
        break;
    }
    */
    delay(1000);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
  }
}


