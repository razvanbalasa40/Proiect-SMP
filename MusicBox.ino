int sensorValue0 = 0;
int sensorValue1 = 0;
int sensorValue2 = 0;
int sensorValue3 = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
}

void loop()
{
   digitalWrite(13, HIGH);
  
  sensorValue0 = analogRead(A0);
  if(sensorValue0 >= 800) {
    tone(8, 523, 100); // (C5 = 523 Hz)
  }
  
  sensorValue1 = analogRead(A1);
  if(sensorValue1 >= 800)
    tone(8, 659, 100); // (E5 = 659 Hz)
  
  sensorValue2 = analogRead(A2);
  if(sensorValue2 >= 800)
    tone(8, 784, 100); // (E5 = 659 Hz)
  
  sensorValue3 = analogRead(A3);
  if(sensorValue3 >= 800)
    tone(8, 880, 100); // (A5 = 880 Hz)
  
  delay(10); 
}
