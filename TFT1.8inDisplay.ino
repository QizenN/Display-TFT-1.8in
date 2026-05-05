#include <TFT.h>
#include <SPI.h>

#define ledpowpin 2
#define cs 10
#define dc 9
#define rst 8
#define potpin A0
int potValue;
int pinValue;

//need a way to control LED's brightness, Potentiometer it is!
//stripe cables = positive, solid = negative
//AA NiHM rechargable 1 unit = 1.2v

void setup() {
  // put your setup code here, to run once:
  TFT TFTscreen = TFT(cs, dc, rst); 
  TFTscreen.begin();
  TFTscreen.background(155,155,155);
  TFTscreen.stroke(255,255,255); //font colour
  TFTscreen.setTextSize(1); //font size
  TFTscreen.text("Hi!",25,50);
  pinMode(ledpowpin, OUTPUT);
  pinMode(potpin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(potpin);
  Serial.println(potValue);
  delay(10);
  pinValue=(255/1023)*potValue;
  analogWrite(ledpowpin, pinValue);
}
