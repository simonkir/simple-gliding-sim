#include "VerticalSpeedIndicator.h"

VerticalSpeedIndicator::VerticalSpeedIndicator(double verticalSpeed)
{
    m_verticalSpeed = verticalSpeed;
}

double VerticalSpeedIndicator::getVerticalSpeed()
{
    return m_verticalSpeed;
}
