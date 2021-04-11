#include"stdio.h"
#include"cable.h"
#include"math.h"

int main()
{
    typedef struct cable
    {
        float sys_voltage;
        float transformer_capacity;
        float ampacity;
        float breaker_rating;
        float site_depth;
        float rating_factor;
        float derating_depth_value;
        float derating_temeprature_value;
        float site_temerature;
        float derating_current;
        float power_factor;
        float length;
        float resistance;
        float reactance;
        float voltage_drop;
        float conductor_size;
        char conductor_type;

    }cable;
    cable c1;

    c1.ampacity =calculate_ampacity(c1.sys_voltage,c1.transformer_capacity);

    c1.breaker_rating=calculate_breaker_current(c1.ampacity);

    c1.derating_depth_value=calculate_derating_depth(c1.site_depth,c1.rating_factor);

    c1.derating_temeprature_value=calculate_derating_temp(c1.site_temerature);

    c1.derating_current =calculate_total_derating(c1.derating_temeprature_value,c1.derating_depth_value,c1.ampacity);

    c1.voltage_drop=calculate_voltagedrop(c1.ampacity,c1.sys_voltage,c1.power_factor,c1.length,c1.resistance,c1.reactance);

    c1.conductor_size=conductor_size(c1.derating_current,c1.conductor_type)


    printf("The given parameters are successful and the area of cross section is %d mm2", c1.conductor_size);


}


