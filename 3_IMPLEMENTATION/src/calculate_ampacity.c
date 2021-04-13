#include"cable.h"
#include"math.h"

float calculate_ampacity(float sys_voltage,float transformer_capacity)
{
    float ampacity;

    ampacity = transformer_capacity*(sqrt(3)*sys_voltage);

    return ampacity;


}