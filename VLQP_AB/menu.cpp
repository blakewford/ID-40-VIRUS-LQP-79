#include "menu.h"
#include "player.h"

// globals ///////////////////////////////////////////////////////////////////

byte menuSelection = STATE_MENU_PLAY;
byte slideCounter = 0;

// method implementations ////////////////////////////////////////////////////
void drawTitleScreen()
{
  sprites.drawSelfMasked(0, 0, virus::getBitmap(virus::TITLESCREEN00_IMAGE), 0);
  sprites.drawSelfMasked(62, 32, virus::getBitmap(virus::TITLESCREEN01_IMAGE), 0);
  sprites.drawSelfMasked(66, 0, virus::getBitmap(virus::TITLESCREEN02_IMAGE), 0);
}

void drawBadge()
{
  sprites.drawSelfMasked(30, 0, virus::getBitmap(virus::TITLESCREEN02_IMAGE), 0);
  sprites.drawSelfMasked(92, 0, virus::getBitmap(virus::TITLESCREEN03_IMAGE), 0);
}

void setSlidersToZero()
{
  globalCounter = 0;
  slideCounter = 0;
}


void makeItSlide()
{
  slideCounter++;
  if (slideCounter > 22)
  {
    globalCounter++;
    slideCounter = 22;
  }

  if (globalCounter > 5)
  {
    globalCounter = 5;
  }
}

void stateMenuIntro()
{
  globalCounter++;
  sprites.drawSelfMasked(34, 4, virus::getBitmap(virus::T_ARG_IMAGE), 0);
  if (globalCounter > 120)
  {
    globalCounter = 0;
    gameState = STATE_MENU_MAIN;
  }
}

void stateMenuMain()
{
  drawTitleScreen();
  for (byte i = 0; i < 3; i++)
  {
    sprites.drawOverwrite(127 - slideCounter + (8 * i) , 25, virus::getBitmap(virus::SMALLMASK_IMAGE), 0);
  }
  if (menuSelection == 2) sprites.drawOverwrite(98 , 25, virus::getBitmap(virus::SMALLMASK_IMAGE), 0);
  for (byte i = 0; i < 4; i++)
  {
    if (((2 + i) - menuSelection) != 0)
    {
      sprites.drawSelfMasked(128 - slideCounter, 25 + (9 * i), virus::getBitmap(virus::MENUTEXT_IMAGE), i);
    }
    if (((2 + i) - menuSelection) == 0) sprites.drawSelfMasked(128 - slideCounter - globalCounter, 25 + (9 * i), virus::getBitmap(virus::MENUTEXT_IMAGE), i);
  }
  if (arduboy.justPressed(DOWN_BUTTON) && (menuSelection < 5))
  {
    menuSelection++;
    globalCounter = 0;
  }
  if (arduboy.justPressed(UP_BUTTON) && (menuSelection > 2))
  {
    menuSelection--;
    globalCounter = 0;
  }
  if (arduboy.justPressed(A_BUTTON | B_BUTTON))
  {
    setSlidersToZero();
    gameState = menuSelection;
    menuSelection = STATE_GAME_NEW - 10;
  }
  makeItSlide();
}

void stateMenuHelp()
{
  for (byte i = 0; i < 2; i++) sprites.drawSelfMasked(32, 32 * i, virus::getBitmap(virus::QRCODE_IMAGE), i);
  if (arduboy.justPressed(A_BUTTON | B_BUTTON)) gameState = STATE_MENU_MAIN;
}

void stateMenuPlay()
{

  drawTitleScreen();
  for (byte i = 0; i < 3; i++)
  {
    sprites.drawOverwrite(127 - slideCounter + (8 * i) , 25, virus::getBitmap(virus::SMALLMASK_IMAGE), 0);
  }
  if (menuSelection == 2) sprites.drawOverwrite(98 , 25, virus::getBitmap(virus::SMALLMASK_IMAGE), 0);
  for (byte i = 0; i < 3; i++)
  {
    if (((2 + i) - menuSelection) != 0)
    {
      sprites.drawSelfMasked(128 - slideCounter, 25 + (9 * i), virus::getBitmap(virus::MENUTEXT_IMAGE), i + 7);
    }
    if (((2 + i) - menuSelection) == 0) sprites.drawSelfMasked(128 - slideCounter - globalCounter, 25 + (9 * i), virus::getBitmap(virus::MENUTEXT_IMAGE), i + 7);
  }
  if (arduboy.justPressed(DOWN_BUTTON) && (menuSelection < 4))
  {
    menuSelection++;
    globalCounter = 0;
  }
  if (arduboy.justPressed(UP_BUTTON) && (menuSelection > 2))
  {
    menuSelection--;
    globalCounter = 0;
  }
  if (arduboy.justPressed(B_BUTTON))
  {
    setSlidersToZero();
    gameState = menuSelection + 10;
    gameType = gameState;
  }
  else if (arduboy.justPressed(A_BUTTON))
  {
    setSlidersToZero();
    gameState = STATE_MENU_MAIN;
  }
  makeItSlide();
}


void stateMenuInfo()
{
  drawBadge();

  sprites.drawSelfMasked(48, 33, virus::getBitmap(virus::MADEBY00_IMAGE), 0);
  sprites.drawSelfMasked(22, 33, virus::getBitmap(virus::MADEBY01_IMAGE), 0);
  sprites.drawSelfMasked(27, 47, virus::getBitmap(virus::MADEBY02_IMAGE), 0);


  if (arduboy.justPressed(A_BUTTON | B_BUTTON)) gameState = STATE_MENU_MAIN;
}

void stateMenuSoundfx()
{
  drawTitleScreen();
  for (byte i = 0; i < 3; i++)
  {
    sprites.drawOverwrite(127 - slideCounter + (8 * i) , 25, virus::getBitmap(virus::SMALLMASK_IMAGE), 0);
  }

  if (arduboy.justPressed(DOWN_BUTTON))
  {
    arduboy.audio.on();
    globalCounter = 0;
  }
  if (arduboy.justPressed(UP_BUTTON))
  {
    arduboy.audio.off();
    globalCounter = 0;
  }
  if (arduboy.justPressed(A_BUTTON | B_BUTTON))
  {
    setSlidersToZero();
    arduboy.audio.saveOnOff();
    gameState = STATE_MENU_MAIN;
  }

  sprites.drawSelfMasked(128 - slideCounter, 25 , virus::getBitmap(virus::MENUTEXT_IMAGE), 4);
  if (arduboy.audio.enabled())
  {
    sprites.drawSelfMasked(128 - slideCounter, 34, virus::getBitmap(virus::MENUTEXT_IMAGE), 5);
    sprites.drawSelfMasked(128 - slideCounter - globalCounter, 43, virus::getBitmap(virus::MENUTEXT_IMAGE), 6);
  }
  else
  {
    sprites.drawSelfMasked(128 - slideCounter, 43, virus::getBitmap(virus::MENUTEXT_IMAGE), 6);
    sprites.drawSelfMasked(128 - slideCounter - globalCounter, 34, virus::getBitmap(virus::MENUTEXT_IMAGE), 5);
  }
  makeItSlide();
}

