#pragma once

#include <inttypes.h>

class EscController
{
private:
    uint32_t *CCRx;

public:
    EscController(uint32_t *CCRx);

    void set(unsigned char speed);
};