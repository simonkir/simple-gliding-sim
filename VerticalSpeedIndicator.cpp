#include "VerticalSpeedIndicator.h"

VerticalSpeedIndicator::VerticalSpeedIndicator(double verticalSpeed)
{
    this->verticalSpeed = verticalSpeed;
}

double VerticalSpeedIndicator::getVerticalSpeed()
{
    return this->verticalSpeed;
}
