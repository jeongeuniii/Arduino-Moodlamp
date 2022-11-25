#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip(8, 6, NEO_GRB + NEO_KHZ800);
int Leddelay=100;
int RGB[8][3]={{204, 51, 0},{255, 153, 0},{255, 204, 0},{0, 255, 0},{0, 102, 0},{0, 0, 255},{51, 0, 204},{102, 51, 204}};

void setup() {
  strip.begin();
  strip.setBrightness(250);
}

void loop() {
for(int j=0; j<8;j++) {
  for(int i=0; i<8; i++) { 
    strip.setPixelColor(i, pixels.Color(RGB[j][0], RGB[j][1], RGB[j][2]));
    strip.show();
    delay(Leddelay);
    strip.setPixelColor(i, strip.Color(0, 0, 0));
    strip.show();
    delay(110);
  }
} 
}
