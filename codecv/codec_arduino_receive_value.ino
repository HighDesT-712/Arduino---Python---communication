#include <cvzone.h>
SerialData serialdata;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(115200);
}

void loop() {

  if(Serial.available()>0){
  // put your main code here, to run repeatedly:
int faceled = Serial.read();
if(faceled =='1'){
  digitalWrite(13,HIGH);
}
if(faceled =='0'){
  digitalWrite(13,LOW);
}
  }
}
