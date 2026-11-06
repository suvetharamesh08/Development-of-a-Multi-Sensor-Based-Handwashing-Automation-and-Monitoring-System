#include<DHT.h>
int ir = 7;
int ldr = 6;
int relay = 5;
int buzzer = 4;
DHT dht(3, DHT11);
void setup() {
  pinMode(ir, INPUT);
  pinMode(ldr, INPUT);
  pinMode(relay, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  dht.begin();
}
void loop() {
  int hand = digitalRead(ir);
  int light = digitalRead(ldr);
  if (light == LOW) {
    Serial.println(" Light is ON");
  }
  else {
    Serial.println(" Light is OFF");
  }
 if (hand == LOW && light == LOW) {
    Serial.println("Hand Detected");
    digitalWrite(relay, LOW);
    delay(3000);
    digitalWrite(relay, HIGH);
    while (digitalRead(ir) == LOW) {
     delay(100);
    }
  }
  else {
    digitalWrite(relay, HIGH);
  }
   float temp = dht.readTemperature();
   Serial.print("TEMPERATURE:");
   Serial.print(temp);
   if (temp >= 33) {
     digitalWrite(buzzer, HIGH);
  }
  else {
    digitalWrite(buzzer, LOW);
  }

  delay(2000);
}
