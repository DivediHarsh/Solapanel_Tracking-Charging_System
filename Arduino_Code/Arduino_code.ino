void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(4,OUTPUT);
  pinMode(3,INPUT);
  pinMode(5,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(2)==HIGH)
{
  digitalWrite(4,OUTPUT);
}
else if(digitalRead(3)==HIGH)
{
  digitalWrite(5,HIGH);
  }
else
{
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  }
}
