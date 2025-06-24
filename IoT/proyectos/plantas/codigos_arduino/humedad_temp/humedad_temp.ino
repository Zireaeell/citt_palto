// Instalar DHT sensor library by Adafruit
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

int SensorPin=A0;

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(1000);

  int h = analogRead(SensorPin);
  float r = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h)) {
    Serial.println("Error obteniendo los datos del sensor FC28");
  }

  if (isnan(r) || isnan(t)) {
    Serial.println("Error obteniendo los datos del sensor DHT11");
    return;
  }
  Serial.print("{\"humedad\":");
  Serial.print(h);
  Serial.print(",\"relativa\":");
  Serial.print(r);
  Serial.print(",\"temperatura\":");
  Serial.print(t);
  Serial.println("}");
}
