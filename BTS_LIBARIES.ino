#include "CLASS.h"


const int relay1 = 26; //pin
int relayON = LOW; //relay nyala
int relayOFF = HIGH; //relay mati

BTS7960 bot(2, 1, 3, 4, 5, 6,7, 16, 8, 9, 10, 11,22, 18, 12, 23, 24, 13);
void setup() {
  // put your setup code here, to run once:
  pinMode(relay1, OUTPUT);
  digitalWrite(relay1, relayOFF);
  Serial.begin(115200);
  while(!Serial){}

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() >= 2){ // Menunggu hingga 4 byte data tersedia (2 koordinat * 2 byte integer)
    byte x_bytes[2];
    Serial.readBytes(x_bytes, 2); // Membaca 2 byte untuk koordinat x
    int x_coord = bytesToInt(x_bytes); // Mengonversi byte menjadi integer
    Serial.print("Received x coordinate: ");
    Serial.println(x_coord);
    Serial.print("\n");
    if(x_coord < 280){
      bot.anticlockwise(6);
    }
    else if(x_coord > 380){
      bot.clockwise(6);
    }
    else{
      bot.maju(6);
    }
  } 
}
int bytesToInt(byte* bytes) {
  int result = (bytes[0] << 8) | bytes[1];
  return result;
}