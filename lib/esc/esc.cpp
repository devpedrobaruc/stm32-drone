#include <esc.hpp>

EscController::EscController(uint32_t *CCRx)
{
    this->CCRx = CCRx;
    this->set(0);
}

void EscController::set(unsigned char speed)
{
    if (speed > 100)
        speed = 100;

    *(this->CCRx) = 100 + speed;
}