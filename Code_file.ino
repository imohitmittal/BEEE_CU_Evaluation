int sensorPin = A0;
int SensorValue = 0;
int a=0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  SensorValue = analogRead(sensorPin);
  
 if(SensorValue<650)
 {
   a=a+1;
 Serial.println("number count--");
  Serial.println(a);
 }
       
}
