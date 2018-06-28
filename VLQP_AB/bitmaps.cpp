#include "bitmaps.h"
#include <assert.h>

namespace levels
{
    namespace internal
    {
        unsigned long int getImageSize(const uint8_t *bitmap);
    }
}

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
            case PLAYERAMY_IMAGE:
                return internal::playerAmy;
            case AMYMASK_IMAGE:
                return internal::playerAmyMask;
            case ZOMBIE_IMAGE:
                return internal::enemyZombie;
            case ZOMBIEMASK_IMAGE:
                return internal::enemyZombieMask;
            case ZOMBIETWO_IMAGE:
                return internal::zombieTwo;
            case ZOMBIETWOMASK_IMAGE:
                return internal::zombieTwoMask;
            case SURVIVOR_IMAGE:
                return internal::survivor;
            case SURVIVORMASK_IMAGE:
                return internal::survivorMask;
            case NUMBERSTINY_IMAGE:
                return internal::numbersTiny;
            case NUMBERSSMALL_IMAGE:
                return internal::numbersSmall_plus_mask;
            case NUMBERSBIG_IMAGE:
                return internal::numbersBig;
            case HUDMASK_IMAGE:
                return internal::HUD_plus_mask;
            case COOLDOWN_IMAGE:
                return internal::coolDownLine_plus_mask;
            case HELPMASK_IMAGE:
                return internal::help_plus_mask;
            case GAMEOVER_IMAGE:
                return internal::gameOver;
            case TEXTMAYHEM_IMAGE:
                return internal::textMayhem;
            case TEXTNORMAL_IMAGE:
                return internal::textNormal;
            case NEXTLEVEL_IMAGE:
                return internal::nextLevel;
            case BONUSPOINTS_IMAGE:
                return internal::bonusPoints;
            case PRESSKEY_IMAGE:
                return internal::pressKey;
            case PAUSE_IMAGE:
                return internal::pause;
/*
collectables_plus_mask
dotMask
*/
            case EXITOPEN_IMAGE:
                return internal::exitOpen;
            case EXITOPENMASK_IMAGE:
                return internal::exitOpenMask;
            case EXITCLOSED_IMAGE:
                return internal::exitClosed;
            case EXITCLOSEDMASK_IMAGE:
                return internal::exitClosedMask;
//youWon
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
        else if(bitmap == internal::playerAmy)
        {
            size = sizeof(internal::playerAmy);
        }
        else if(bitmap == internal::playerAmyMask)
        {
            size = sizeof(internal::playerAmyMask);
        }
        else if(bitmap == internal::enemyZombie)
        {
            size = sizeof(internal::enemyZombie);
        }
        else if(bitmap == internal::enemyZombieMask)
        {
            size = sizeof(internal::enemyZombieMask);
        }
        else if(bitmap == internal::zombieTwo)
        {
            size = sizeof(internal::zombieTwo);
        }
        else if(bitmap == internal::zombieTwoMask)
        {
            size = sizeof(internal::zombieTwoMask);
        }
        else if(bitmap == internal::survivor)
        {
            size = sizeof(internal::survivor);
        }
        else if(bitmap == internal::survivorMask)
        {
            size = sizeof(internal::survivorMask);
        }
        else if(bitmap == internal::numbersTiny)
        {
            size = sizeof(internal::numbersTiny);
        }
        else if(bitmap == internal::numbersSmall_plus_mask)
        {
            size = sizeof(internal::numbersSmall_plus_mask);
        }
        else if(bitmap == internal::numbersBig)
        {
            size = sizeof(internal::numbersBig);
        }
        else if(bitmap == internal::HUD_plus_mask)
        {
            size = sizeof(internal::HUD_plus_mask);
        }
        else if(bitmap == internal::coolDownLine_plus_mask)
        {
            size = sizeof(internal::coolDownLine_plus_mask);
        }
        else if(bitmap == internal::help_plus_mask)
        {
            size = sizeof(internal::help_plus_mask);
        }
        else if(bitmap == internal::gameOver)
        {
            size = sizeof(internal::gameOver);
        }
        else if(bitmap == internal::textMayhem)
        {
            size = sizeof(internal::textMayhem);
        }
        else if(bitmap == internal::textNormal)
        {
            size = sizeof(internal::textNormal);
        }
        else if(bitmap == internal::nextLevel)
        {
            size = sizeof(internal::nextLevel);
        }
        else if(bitmap == internal::bonusPoints)
        {
            size = sizeof(internal::bonusPoints);
        }
        else if(bitmap == internal::pressKey)
        {
            size = sizeof(internal::pressKey);
        }
        else if(bitmap == internal::pause)
        {
            size = sizeof(internal::pause);
        }
/*
collectables_plus_mask
dotMask
*/
        else if(bitmap == internal::exitOpen)
        {
            size = sizeof(internal::exitOpen);
        }
        else if(bitmap == internal::exitOpenMask)
        {
            size = sizeof(internal::exitOpenMask);
        }
        else if(bitmap == internal::exitClosed)
        {
            size = sizeof(internal::exitClosed);
        }
        else if(bitmap == internal::exitClosedMask)
        {
            size = sizeof(internal::exitClosedMask);
        }
//youWon
        else
        {
            size = levels::internal::getImageSize(bitmap);
        }

        if(size == 0)
        {
            assert(0);
        }

        return size;
    }
}
