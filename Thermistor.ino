int Thermistor=13;
int redled=9;
int greenled=8;
int fan=6;
void setup() {
  // put your setup code here, to run once:
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(Thermistor, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int digitalSensor = digitalRead(Thermistor);
 if (digitalSensor == LOW)
  {
    digitalWrite(fan, HIGH);
    digitalWrite(redled, HIGH);
    digitalWrite(greenled, LOW);
    
  }
  else
  {
    digitalWrite(fan, LOW);
    digitalWrite(redled, LOW);
    digitalWrite(greenled, HIGH);
    
  }
  delay(1000);
}
