#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(8, 6, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
  strip.setBrightness(250);
}

void loop() {
  strip.setPixelColor(0, strip.Color(204, 51, 0));
  strip.show();
  delay(100);
  strip.setPixelColor(1, strip.Color(255, 153, 0));
  strip.show();
  delay(100);
  strip.setPixelColor(2, strip.Color(255, 204, 0));
  strip.show();
  delay(100);
  strip.setPixelColor(3, strip.Color(0, 255, 0));
  strip.show();
  delay(100);
  strip.setPixelColor(4, strip.Color(0, 102, 0));
  strip.show();
  delay(100);
  strip.setPixelColor(5, strip.Color(0, 0, 255));
  strip.show();
  delay(100);
  strip.setPixelColor(6, strip.Color(51, 0, 204));
  strip.show();
  delay(100);
  strip.setPixelColor(7, strip.Color(102, 51, 204));
  strip.show();
  delay(100);

  for(int i = 0; i < 8;i=i+1)
  {
    strip.setPixelColor(i, strip.Color(0, 0, 0));
    strip.show();
    delay(100);
  }
}
