#include"cable.h"
#include"math.h"

float calculate_derating_temp(float site_temerature)
{
    float derating_temeprature_value;

    if(site_temerature<=15)
    
    {derating_temeprature_value=1.12;}
        
    else if(site_temerature>15&&site_temerature<=25)
        
     {derating_temeprature_value=1.04;}

    else if(site_temerature>25&&site_temerature<=35)
        
     {derating_temeprature_value=0.96;}

     else if(site_temerature>35&&site_temerature<=40)
        
     {derating_temeprature_value=0.91;}

     else if(site_temerature>40&&site_temerature<=50)
        
     {derating_temeprature_value=0.82;}


     return derating_temeprature_value;

        
    
}