#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD pini tanımları

int sensorPin = A0; // Sensörün analog pini A0'a bağlanır
int ledPin = 13; // LED'in dijital pini 13'e bağlanır
int threshold = 500; // Eşik değeri

void setup() {
  pinMode(ledPin, OUTPUT); // LED pinini çıkış olarak ayarla
  lcd.begin(16, 2); // LCD ekranı başlat
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Sensör değerini oku

  if (sensorValue > threshold) { // Eşik değerini geçtiyse
    digitalWrite(ledPin, HIGH); // LED'i yak
    lcd.setCursor(0, 0); // İlk satırın başına git
    lcd.print("Ateş algılandı!"); // LCD ekrana mesaj yazdır
  } else {
    digitalWrite(ledPin, LOW); // LED'i söndür
    lcd.clear(); // LCD ekranı temizle
  }

  delay(100); // 100ms bekle
}
