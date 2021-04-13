#include"cable.h"
#include"math.h"

float calculate_voltagedrop(float ampacity,float sys_voltage,float power_factor,float length,float resistance,float reactance)
{
    float voltage_drop;

    voltage_drop=(sqrt(3)*length*ampacity*((resistance*power_factor)+(reactance*sin( acos(power_factor))))*100)/(sys_voltage*1000);

    return voltage_drop;
    

}