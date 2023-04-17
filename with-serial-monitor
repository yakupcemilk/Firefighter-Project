int sensorPin = A0; 
int ledPin = 13; 
int threshold = 500; 

void setup() {
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600); 
}

void loop() {
  int sensorValue = analogRead(sensorPin); 

  if (sensorValue > threshold) { 
    digitalWrite(ledPin, HIGH);
    Serial.println("Ateş algılandı!"); 
  } else {
    digitalWrite(ledPin, LOW); 
  }

  delay(100); 
}
