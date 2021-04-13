#include"cable.h"
#include"math.h"

float calculate_total_derating(float derating_teperature_value,float derating_depth_value,float ampacity)
{
    float total_derating_factor=derating_depth_value*derating_teperature_value;

    float derating_current=ampacity*total_derating_factor;

    return derating_current;
}