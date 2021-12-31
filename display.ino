#include <Multiplexer.h>
#include <Fat16.h>
#include <ArduinoRobot.h>
#include <Fat16Config.h>
#include <Arduino_LCD.h>
#include <SquawkSD.h>
#include <EasyTransfer2.h>
#include <Fat16mainpage.h>
#include <SdCard.h>
#include <SdInfo.h>
#include <Compass.h>
#include <Squawk.h>
#include <EEPROM_I2C.h>
#include <Fat16util.h>
#include <FatStructs.h>

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3c);
  display.setTextColor(Blue);
  display.clearDisplay();
}

void loop() {
 display.setTextSize(1);
 display.setCursor(50, 50);
 display.print("Bennett is the best");
 display.display();
}
