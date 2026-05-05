#include <TFT.h>
#include <SPI.h>

#define cs 10
#define dc 9
#define rst 8

//need a way to control LED's brightness, Potentiometer it is!

void setup() {
  // put your setup code here, to run once:
  TFT TFTscreen = TFT(cs, dc, rst); 
  TFTscreen.begin();
  TFTscreen.background(155,155,155);
  TFTscreen.stroke(255,255,255); //font colour
  TFTscreen.setTextSize(1); //font size
  TFTscreen.text("Hi!",25,50);
}

void loop() {
  // put your main code here, to run repeatedly:

}
