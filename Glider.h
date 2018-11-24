#include "Thermals.h"
#include "VerticalSpeedIndicator.h"

class Glider
{
    private:
        Thermals thermals;
        VerticalSpeedIndicator verticalSpeedIndicator;

    public:
        Glider(Thermals thermals, VerticalSpeedIndicator verticalSpeedIndicator);
};
