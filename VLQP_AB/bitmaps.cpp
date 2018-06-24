#include "bitmaps.h"
#include <assert.h>

namespace virus
{
    const uint8_t* getBitmap(imageId image)
    {
        switch(image)
        {
            case T_ARG_IMAGE:
                return T_arg;
            case TITLESCREEN00_IMAGE:
                return titleScreen00;
            case TITLESCREEN01_IMAGE:
                return titleScreen01;
            case TITLESCREEN02_IMAGE:
                return titleScreen02;
            case MENUTEXT_IMAGE:
                return menuText;
            case SMALLMASK_IMAGE:
                return smallMask;
        }

        return nullptr;
    }

    unsigned long int getImageSize(const uint8_t *bitmap)
    {
        unsigned long int size = 0;

        if(bitmap == T_arg)
        {
            size = sizeof(T_arg);
        }
        else if(bitmap == titleScreen00)
        {
            size = sizeof(titleScreen00);
        }
        else if(bitmap == titleScreen01)
        {
            size = sizeof(titleScreen01);
        }
        else if(bitmap == titleScreen02)
        {
            size = sizeof(titleScreen02);
        }
        else if(bitmap == qrcode)
        {
            size = sizeof(qrcode);
        }
        else if(bitmap == menuText)
        {
            size = sizeof(menuText);
        }
        else if(bitmap == numbersBig)
        {
            size = sizeof(numbersBig);
        }
        else if(bitmap == smallMask)
        {
            size = sizeof(smallMask);
        }
        else
        {
            assert(0);
        }

        return size;
    }
}
