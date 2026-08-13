const int soilPin = A0;
const int redPin = A1 ;
const int greenPin = A2;
const int bluePin = A3;
 

int soilValue;

void setColor(int r, int g, int b)
 {
  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b);
 } 

void setup()
 {
  Serial.begin(9600);
  pinMode(soilPin, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
 }

void loop()
 {
  soilValue=analogRead(soilPin);
  
  Serial.print("soilValue:");
  Serial.println(soilValue);

  if(soilValue > 400)
  {
    setColor(255, 0, 0);
    delay(2000);
    setColor(0, 0, 0);
    delay(2000);
  }
  else if(soilValue>100)
  {
    setColor(0, 255, 0);
    delay(2000);
    setColor(0, 0, 0);
    delay(2000);
  }
  else
  {
    setColor(0, 0, 255);
    delay(2000);
  }
}  
