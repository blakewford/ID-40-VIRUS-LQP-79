#pragma once

#include "Sprites.h"
#include "Arduboy2Audio.h"

struct Rect
{
  int16_t x;
  int16_t y;
  uint8_t width;
  uint8_t height;
};

class Arduboy2Base
{
public:
    void boot();
    void bootLogoSpritesSelfMasked();
    void begin();
    void setFrameRate(uint8_t rate);
    void initRandomSeed();
    bool everyXFrames(uint8_t frames);
    bool pressed(uint8_t buttons);
    bool notPressed(uint8_t buttons);
    bool justPressed(uint8_t button);
    bool collide(Rect rect1, Rect rect2);
    void drawCircle(int16_t x0, int16_t y0, uint8_t r, uint8_t color=1);
    bool nextFrame();
    void pollButtons();
    void clear();
    void display();

    Arduboy2Audio audio;
};
