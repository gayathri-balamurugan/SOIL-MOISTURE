int soilPin=A0;
int ledPin=7;
void setup() 
{
 pinMode(ledPin,OUTPUT);
 Serial.begin(9600);
}

void loop()
{
 int sensorValue=analogRead(soilPin);
 Serial.print("soilsensor Value");
 Serial.println(sensorValue);
 if(sensorValue>=200)
 {
   digitalWrite(ledPin, HIGH);
   delay(1000);
   }
 else
 {
   digitalWrite(ledPin, LOW);
   delay(1000);
 }
 delay(1000);
}
