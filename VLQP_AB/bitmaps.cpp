#include "bitmaps.h"
#include <assert.h>

namespace virus
{
    const uint8_t* getBitmap(imageId image)
    {
        switch(image)
        {
            case T_ARG_IMAGE:
                return internal::T_arg;
            case TITLESCREEN00_IMAGE:
                return internal::titleScreen00;
            case TITLESCREEN01_IMAGE:
                return internal::titleScreen01;
            case TITLESCREEN02_IMAGE:
                return internal::titleScreen02;
            case TITLESCREEN03_IMAGE:
                return internal::titleScreen03;
            case MENUTEXT_IMAGE:
                return internal::menuText;
            case SMALLMASK_IMAGE:
                return internal::smallMask;
            case QRCODE_IMAGE:
                return internal::qrcode;
            case MADEBY00_IMAGE:
                return internal::madeBy00;
            case MADEBY01_IMAGE:
                return internal::madeBy01;
            case MADEBY02_IMAGE:
                return internal::madeBy02;
/*
madeBy00
madeBy01
madeBy02
playerAmy
playerAmyMask
enemyZombie
enemyZombieMask
zombieTwo
zombieTwoMask
survivor
survivorMask
numbersTiny
numbersSmall_plus_mask
numbersBig
HUD_plus_mask
coolDownLine_plus_mask
help_plus_mask
gameOver
textMayhem
textNormal
nextLevel
bonusPoints
pressKey
pause
collectables_plus_mask
dotMask
exitOpen
exitOpenMask
exitClosed
exitClosedMask
youWon
*/
        }

        return nullptr;
    }

    unsigned long int getImageSize(const uint8_t *bitmap)
    {
        unsigned long int size = 0;

        if(bitmap == internal::T_arg)
        {
            size = sizeof(internal::T_arg);
        }
        else if(bitmap == internal::titleScreen00)
        {
            size = sizeof(internal::titleScreen00);
        }
        else if(bitmap == internal::titleScreen01)
        {
            size = sizeof(internal::titleScreen01);
        }
        else if(bitmap == internal::titleScreen02)
        {
            size = sizeof(internal::titleScreen02);
        }
        else if(bitmap == internal::titleScreen03)
        {
            size = sizeof(internal::titleScreen03);
        }
        else if(bitmap == internal::menuText)
        {
            size = sizeof(internal::menuText);
        }
        else if(bitmap == internal::smallMask)
        {
            size = sizeof(internal::smallMask);
        }
        else if(bitmap == internal::qrcode)
        {
            size = sizeof(internal::qrcode);
        }
        else if(bitmap == internal::madeBy00)
        {
            size = sizeof(internal::madeBy00);
        }
        else if(bitmap == internal::madeBy01)
        {
            size = sizeof(internal::madeBy01);
        }
        else if(bitmap == internal::madeBy02)
        {
            size = sizeof(internal::madeBy02);
        }
/*
playerAmy
playerAmyMask
enemyZombie
enemyZombieMask
zombieTwo
zombieTwoMask
survivor
survivorMask
numbersTiny
numbersSmall_plus_mask
numbersBig
HUD_plus_mask
coolDownLine_plus_mask
help_plus_mask
gameOver
textMayhem
textNormal
nextLevel
bonusPoints
pressKey
pause
collectables_plus_mask
dotMask
exitOpen
exitOpenMask
exitClosed
exitClosedMask
youWon
*/
        else if(bitmap == numbersBig)
        {
            size = sizeof(numbersBig);
        }
        else
        {
            assert(0);
        }

        return size;
    }
}
