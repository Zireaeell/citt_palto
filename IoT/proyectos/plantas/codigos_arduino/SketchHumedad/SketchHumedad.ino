int SensorPin=A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int humedad = analogRead(SensorPin);
  Serial.print(humedad);
  Serial.print('\n');
  delay(1000);
}
