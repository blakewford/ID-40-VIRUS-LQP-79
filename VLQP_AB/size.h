#include "bitmaps.h"

namespace virus
{

    unsigned long int getImageSize(const uint8_t *bitmap)
    {
        unsigned long int size = 0;

        if(bitmap == T_arg)
        {
            size = sizeof(T_arg);
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
        else
        {
            assert(0);
        }

        return size;
    }
}
