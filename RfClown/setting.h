
#ifndef setting_H
#define setting_H

#include <BLEDevice.h>
#include <U8g2lib.h>
#include <Adafruit_NeoPixel.h>
#include <RF24.h>
#include <vector>
#include <string>
#include <SPI.h>

void neopixelSetup();
void neopixelLoop();
void setNeoPixelColour(const std::string& colour);
void flash(int numberOfFlashes, const std::vector<std::string>& colors, const std::string& finalColour);

extern U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2;
extern Adafruit_NeoPixel pixels;

extern RF24 RadioA;
extern RF24 RadioB;
extern RF24 RadioC;

void configureNrf(RF24 &radio);
void setRadiosNeutralState();
void setupRadioA();
void setupRadioB();
void setupRadioC();
void initAllRadios();

void Str(uint8_t x, uint8_t y, const uint8_t* asciiArray, size_t len);
void CenteredStr(uint8_t screenWidth, uint8_t y, const uint8_t* asciiArray, size_t len, const uint8_t* font);
void conf();

const uint8_t txt_n[] = {82,102,67,108,111,119,110};
const uint8_t txt_c[] = {98,121,32,67,105,102,101,114,84,101,99,104};
const uint8_t txt_v[] = {118,50,46,48,46,48};
extern const unsigned char cred[] PROGMEM; // define where convenient

#endif
