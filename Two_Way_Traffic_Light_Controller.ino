int greenOne = 1;
int yellowOne = 2;
int redOne = 3;
int greenTwo = 4;
int yellowTwo = 5;
int redTwo = 6;
int longWait = 7000;
int shortWait = 1000;

void setup() {

  pinMode(greenOne,OUTPUT);
  pinMode(yellowOne,OUTPUT);
  pinMode(redOne,OUTPUT);
  pinMode(greenTwo,OUTPUT);
  pinMode(yellowTwo,OUTPUT);
  pinMode(redTwo,OUTPUT);

}

void loop() {

  digitalWrite(greenOne,HIGH);
  digitalWrite(yellowOne,LOW);
  digitalWrite(redOne,LOW);
  digitalWrite(greenTwo,LOW);
  digitalWrite(yellowTwo,LOW);
  digitalWrite(redTwo,HIGH);
  delay(longWait);
  digitalWrite(greenOne,LOW);
  digitalWrite(yellowOne,HIGH);
  delay(shortWait);
  digitalWrite(yellowOne,LOW);
  digitalWrite(redOne,HIGH);
  digitalWrite(greenTwo,HIGH);
  digitalWrite(redTwo,LOW);
  delay(longWait);
  digitalWrite(greenTwo,LOW);
  digitalWrite(yellowTwo,HIGH);
  delay(shortWait);

}
