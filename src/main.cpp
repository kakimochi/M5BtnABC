#include <M5Unified.h>

#define APP_NAME "M5BtnABC"

void drawCenterText(const char* text, int textSize) {
  M5.Lcd.fillScreen(TFT_BLACK);
  M5.Lcd.setTextSize(textSize);
  M5.Lcd.setTextDatum(MC_DATUM);
  M5.Lcd.drawString(text, M5.Lcd.width() / 2, M5.Lcd.height() / 2);
}

void setup() {
  auto cfg = M5.config();
  M5.begin(cfg);

  M5.setTouchButtonHeight(40);
  // M5.setTouchButtonHeightByRatio 

  M5.Lcd.setTextSize(4);
  M5.Lcd.print("Hi," APP_NAME "!");
}

void loop() {
  M5.update();

  if(M5.BtnA.wasReleased()) {
    drawCenterText("A", 20);
  }
  if(M5.BtnB.wasReleased()) {
    drawCenterText("B", 20);
  }
  if(M5.BtnC.wasReleased()) {
    drawCenterText("C", 20);
  }

  M5.delay(50);
}

