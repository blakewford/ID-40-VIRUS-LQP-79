#ifndef EEPROM_H
#define EEPROM_H

#include <stdint.h>

class ROM
{
public:
    uint8_t read(uint16_t address);
    void write(uint16_t address, uint8_t value);
    void put(uint16_t address, uint8_t value);
    void get(uint16_t address, int& value);
    void get(uint16_t address, unsigned long& value);
    void get(uint16_t address, uint8_t& value);
};

static ROM EEPROM;

#endif
