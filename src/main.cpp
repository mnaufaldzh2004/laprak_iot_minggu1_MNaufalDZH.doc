#include <Arduino.h> // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int lampuMerah = 26;
int lampuKuning = 33;
int lampuHijau = 32;

void setup() {
    Serial.begin(115200);
    
    // Atur pin sebagai OUTPUT
    pinMode(lampuMerah, OUTPUT);
    pinMode(lampuKuning, OUTPUT);
    pinMode(lampuHijau, OUTPUT);
}

void loop() {
    // Nyalakan lampu merah selama 30 detik
    digitalWrite(lampuMerah, HIGH);
    Serial.println("Lampu Merah ON");
    delay(30000);
    digitalWrite(lampuMerah, LOW);
    
    // Nyalakan lampu hijau selama 20 detik
    digitalWrite(lampuHijau, HIGH);
    Serial.println("Lampu Hijau ON");
    delay(20000);
    digitalWrite(lampuHijau, LOW);
    
    // Nyalakan lampu kuning selama 5 detik
    digitalWrite(lampuKuning, HIGH);
    Serial.println("Lampu Kuning ON");
    delay(5000);
    digitalWrite(lampuKuning, LOW);
}