#ifndef GLIDER_H
#define GLIDER_H

#include "Thermals.h"
#include "VerticalSpeedIndicator.h"

class Glider
{
    private:
        Thermals m_thermals;
        VerticalSpeedIndicator m_verticalSpeedIndicator;

    public:
        Glider(Thermals thermals, VerticalSpeedIndicator verticalSpeedIndicator);
};

#endif
