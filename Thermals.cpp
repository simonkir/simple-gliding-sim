#include <cstdlib>
#include <ctime>

#include "Thermals.h"

Thermals::Thermals()
{
    this->setVerticalSpeed();
}

// sets verticalSpeed to the current vertical speed
void Thermals::setVerticalSpeed()
{
    // seed the random generator
    std::srand(std::time(nullptr));

    // random number betweeen 0 and 5
    // casts used to get double values
    this->verticalSpeed = static_cast<double>(std::rand()) / static_cast<double>(((RAND_MAX + 1u) / 5));
}

// returns the current vertical speed
double Thermals::getThermals()
{
    return this->verticalSpeed;
}
