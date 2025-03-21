#define A 18
#define B 16
#define C 5
#define D 22
#define E 19
#define F 21
#define G 4
#define DP 17
#define DIGIT1 2
#define DIGIT2 23
#define ledRosu 13
#define ledGalben 12
#define ledVerde 27
#define T3 15
#define T6 14
#define T9 12
#include "BluetoothSerial.h"
#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run make menuconfig to and enable it
#endif

BluetoothSerial SerialBT;

void setup() {
pinMode(ledRosu, OUTPUT);
pinMode(ledGalben, OUTPUT);
pinMode(ledVerde, OUTPUT);
pinMode(A, OUTPUT); //A
pinMode(B, OUTPUT); //B
pinMode(C, OUTPUT); //C
pinMode(D, OUTPUT); //D
pinMode(E, OUTPUT); //E
pinMode(F, OUTPUT); //F
pinMode(G, OUTPUT); //G
pinMode(DP, OUTPUT); //DP
pinMode(DIGIT1, OUTPUT); //DIGIT1
pinMode(DIGIT2, OUTPUT); //DIGIT2
pinMode(T3, INPUT);
pinMode(T6, INPUT);
pinMode(T9, INPUT);
Serial.begin(115200);
delay(1000);
SerialBT.begin("ESP-Echipa 8");
Serial.println("The device started, now you can pair it with bluetooth!");
}

void loop() {

if(digitalRead(T3==1)){
digitalWrite(ledRosu, HIGH);
SerialBT.println("Semaforul s-a facut rosu, va rog asteptati");
delay(2000);
SerialBT.println("Au mai ramas 8 secunde");
delay(2000);
SerialBT.println("Au mai ramas 6 secunde");
delay(2000);
SerialBT.println("Au mai ramas 4 secunde");
delay(2000);
SerialBT.println("Au mai ramas 2 secunde");
delay(2000);
digitalWrite(ledRosu, LOW);
digitalWrite(DIGIT1,LOW); //DIGIT1
digitalWrite(DIGIT2,HIGH); //DIGIT2
digitalWrite(A,HIGH); //a
digitalWrite(B,LOW); //b
digitalWrite(C,HIGH); //c
digitalWrite(D,HIGH); //d
digitalWrite(E,LOW); //e
digitalWrite(F,HIGH); //f
digitalWrite(G,HIGH); // g
delay(2000);
digitalWrite(DIGIT1,HIGH); //DIGIT1
digitalWrite(DIGIT2,LOW); //DIGIT2
digitalWrite(A,LOW); //a
digitalWrite(B,LOW); //b
digitalWrite(C,LOW); //c
digitalWrite(D,HIGH); //d
digitalWrite(E,HIGH); //e
digitalWrite(F,HIGH); //f
digitalWrite(G,HIGH); // g
delay(2000);
digitalWrite(DIGIT1,LOW); //DIGIT1
digitalWrite(DIGIT2,HIGH); //DIGIT2
digitalWrite(A,HIGH); //a
digitalWrite(B,HIGH); //b
digitalWrite(C,HIGH); //c
digitalWrite(D,LOW); //d
digitalWrite(E,HIGH); //e
digitalWrite(F,HIGH); //f
digitalWrite(G,HIGH); // g
delay(2000);
digitalWrite(DIGIT1,HIGH); //DIGIT1
digitalWrite(DIGIT2,LOW); //DIGIT2
digitalWrite(A,LOW); //a
digitalWrite(B,LOW); //b
digitalWrite(C,LOW); //c
digitalWrite(D,LOW); //d
digitalWrite(E,HIGH); //e
digitalWrite(F,LOW); //f
digitalWrite(G,HIGH); // g
delay(2000);
digitalWrite(DIGIT1,LOW); //DIGIT1
digitalWrite(DIGIT2,HIGH); //DIGIT2
digitalWrite(A,LOW); //a
digitalWrite(B,LOW); //b
digitalWrite(C,LOW); //c
digitalWrite(D,HIGH); //d
digitalWrite(E,HIGH); //e
digitalWrite(F,HIGH); //f
digitalWrite(G,HIGH); // g
delay(2000);
digitalWrite(DIGIT1,LOW); //DIGIT1
digitalWrite(DIGIT2,LOW); //DIGIT2
digitalWrite(A,LOW); //a
digitalWrite(B,LOW); //b
digitalWrite(C,LOW); //c
digitalWrite(D,LOW); //d
digitalWrite(E,LOW); //e
digitalWrite(F,LOW); //f
digitalWrite(G,LOW); // g
delay(2000);
digitalWrite(DIGIT1, LOW);
digitalWrite(DIGIT2, LOW);
}

if(digitalRead(T6==1)){
digitalWrite(ledVerde, HIGH);
SerialBT.println("Semaforul s-a facut verde, va rog traversati");
digitalWrite(ledGalben, HIGH);
delay(1000);
digitalWrite(ledGalben, LOW);
delay(1000);
SerialBT.println("Au mai ramas 8 secunde");
digitalWrite(ledGalben, HIGH);
delay(1000);
digitalWrite(ledGalben, LOW);
delay(500);
digitalWrite(ledGalben, HIGH);
delay(500);
SerialBT.println("Au mai ramas 6 secunde");
digitalWrite(ledGalben, LOW);
delay(500);
digitalWrite(ledGalben, HIGH);
delay(500);
digitalWrite(ledGalben, LOW);
delay(500);
digitalWrite(ledGalben, HIGH);
delay(500);
SerialBT.println("Au mai ramas 4 secunde");
delay(333.333);
digitalWrite(ledGalben, LOW);
delay(333.333);
digitalWrite(ledGalben, HIGH);
delay(333.333);
digitalWrite(ledGalben, LOW);
delay(333.333);
digitalWrite(ledGalben, HIGH);
delay(333.333);
digitalWrite(ledGalben, LOW);
delay(333.333);
SerialBT.println("Au mai ramas 2 secunde");
digitalWrite(ledGalben, HIGH);
delay(333.333);
digitalWrite(ledGalben, LOW);
delay(333.333);
digitalWrite(ledGalben, HIGH);
delay(333.333);
digitalWrite(ledGalben, LOW);
delay(333.333);
digitalWrite(ledGalben, HIGH);
delay(333.333);
digitalWrite(ledGalben, LOW);
delay(333.333);
digitalWrite(ledVerde, LOW);
digitalWrite(DIGIT1,LOW); //DIGIT1
digitalWrite(DIGIT2,HIGH); //DIGIT2
digitalWrite(A,HIGH); //a
digitalWrite(B,LOW); //b
digitalWrite(C,HIGH); //c
digitalWrite(D,HIGH); //d
digitalWrite(E,LOW); //e
digitalWrite(F,HIGH); //f
digitalWrite(G,HIGH); // g
delay(2000);
digitalWrite(DIGIT1,HIGH); //DIGIT1
digitalWrite(DIGIT2,LOW); //DIGIT2
digitalWrite(A,LOW); //a
digitalWrite(B,LOW); //b
digitalWrite(C,LOW); //c
digitalWrite(D,HIGH); //d
digitalWrite(E,HIGH); //e
digitalWrite(F,HIGH); //f
digitalWrite(G,HIGH); // g
delay(2000);
digitalWrite(DIGIT1,LOW); //DIGIT1
digitalWrite(DIGIT2,HIGH); //DIGIT2
digitalWrite(A,LOW); //a
digitalWrite(B,LOW); //b
digitalWrite(C,HIGH); //c
digitalWrite(D,HIGH); //d
digitalWrite(E,HIGH); //e
digitalWrite(F,LOW); //f
digitalWrite(G,HIGH); // g
delay(5);
digitalWrite(DIGIT1,HIGH); //DIGIT1
digitalWrite(DIGIT2,LOW); //DIGIT2
digitalWrite(A,HIGH); //a
digitalWrite(B,HIGH); //b
digitalWrite(C,LOW); //c
digitalWrite(D,LOW); //d
digitalWrite(E,HIGH); //e
digitalWrite(F,HIGH); //f
digitalWrite(G,HIGH); // g
delay(2000);
digitalWrite(DIGIT1, LOW);
digitalWrite(DIGIT2, LOW);
}

if(digitalRead(T9==1)){
digitalWrite(ledRosu, HIGH);
SerialBT.println("Semaforul s-a facut rosu, va rog asteptati");
delay(2000);
SerialBT.println("Au mai ramas 8 secunde");
delay(2000);
SerialBT.println("Au mai ramas 6 secunde");
delay(2000);
SerialBT.println("Au mai ramas 4 secunde");
delay(2000);
SerialBT.println("Au mai ramas 2 secunde");
delay(2000);
digitalWrite(ledRosu, LOW);  
digitalWrite(ledVerde, HIGH);
SerialBT.println("Semaforul s-a facut verde, va rog traversati");
digitalWrite(ledGalben, HIGH);
delay(1000);
digitalWrite(ledGalben, LOW);
delay(1000);
SerialBT.println("Au mai ramas 8 secunde");
digitalWrite(ledGalben, HIGH);
delay(1000);
digitalWrite(ledGalben, LOW);
delay(500);
digitalWrite(ledGalben, HIGH);
delay(500);
SerialBT.println("Au mai ramas 6 secunde");
digitalWrite(ledGalben, LOW);
delay(500);
digitalWrite(ledGalben, HIGH);
delay(500);
digitalWrite(ledGalben, LOW);
delay(500);
digitalWrite(ledGalben, HIGH);
delay(500);
SerialBT.println("Au mai ramas 4 secunde");
delay(333.333);
digitalWrite(ledGalben, LOW);
delay(333.333);
digitalWrite(ledGalben, HIGH);
delay(333.333);
digitalWrite(ledGalben, LOW);
delay(333.333);
digitalWrite(ledGalben, HIGH);
delay(333.333);
digitalWrite(ledGalben, LOW);
delay(333.333);
SerialBT.println("Au mai ramas 2 secunde");
digitalWrite(ledGalben, HIGH);
delay(333.333);
digitalWrite(ledGalben, LOW);
delay(333.333);
digitalWrite(ledGalben, HIGH);
delay(333.333);
digitalWrite(ledGalben, LOW);
delay(333.333);
digitalWrite(ledGalben, HIGH);
delay(333.333);
digitalWrite(ledGalben, LOW);
delay(333.333);
digitalWrite(ledVerde, LOW);
}  
}
