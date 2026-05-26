#define buz A3

void setup()
{  
  pinMode (A0, OUTPUT); 
  pinMode (A1, OUTPUT); 
  pinMode (A2, OUTPUT);
  pinMode (4 , OUTPUT);
  pinMode (3 , OUTPUT);
  pinMode (2 , OUTPUT);
  pinMode (buz, OUTPUT);
}

void loop()
{
  analogWrite(A0, 225);
  delay(500);
  analogWrite(A0, 0);
  analogWrite(buz, 225);
  delay(100);
  analogWrite(buz, 0);
  delay(500);
  
  digitalWrite(4, 255);
  digitalWrite(3, 255);
  delay(500);
  digitalWrite(4, 0);
  digitalWrite(3, 0);
  analogWrite(buz, 225);
  delay(100);
  analogWrite(buz, 0);
  delay(500);
  
  analogWrite(A1, 225);
  analogWrite(A2, 225);
  delay(500);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  analogWrite(buz, 225);
  delay(100);
  analogWrite(buz, 0);
  delay(500);
}