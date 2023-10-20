#include <Wire.h>
#include "HT_SSD1306Wire.h"

SSD1306Wire  display(0x3c, 500000, SDA, SCL, GEOMETRY_128_64, GPIO10); // addr , freq , SDA, SCL, resolution , rst

void setup() {
  display.init();
  display.flipScreenVertically();
}

void loop() {
  display.setFont(ArialMT_Plain_16);
  display.setTextAlignment(TEXT_ALIGN_CENTER);
  display.drawString(64, 3, "Distance 69 km");
  display.display();
  delay(4000);

  display.clear();
  display.setColor(WHITE);
  display.fillCircle(70,50, 5);

  display.setColor(WHITE);
  for (int16_t i=0; i<display.getHeight()/2; i+=2) {
    display.drawCircle(10,50, i);
    display.display();
    delay(300);
  }

  
}