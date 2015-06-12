#define LED1 1
#define LED2 2
#define LED3 3
#define LED4 4
int ledPin = 13;
 int Y = 0;                 // slider variable connecetd to analog pin 0
 int X = 1;                 // slider variable connecetd to analog pin 1
 int value1 = 0;                  // variable to read the value from the analog pin 0
 int value2 = 0;                  // variable to read the value from the analog pin 1

void setup() {
  pinMode(ledPin, OUTPUT);              // initializes digital pins 0 to 7 as outputs
  Serial.begin(9600);
}

void loop() {
  // reads the value of the variable resistor
  value1 = analogRead(Y);  
  // this small pause is needed between reading
  // analog pins, otherwise we get the same value twice
  delay(100);            
  // reads the value of the variable resistor
  value2 = analogRead(X);  

  Serial.print(value1);
  Serial.print("   ");
  Serial.println(value2);
}


