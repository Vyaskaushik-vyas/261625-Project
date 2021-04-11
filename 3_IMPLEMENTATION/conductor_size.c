#include"cable.h"
#include"math.h"

float conductor_size(float derating_current ,char conductor_type)
{
 float conductor_size;

 if(conductor_type=='C')
 {
     if (derating_current>=290&&derating_current<340)
        conductor_size=185;
    else if (derating_current>=340&&derating_current<380)
         conductor_size=240;
    else if (derating_current>=380&&derating_current<440)
         conductor_size=300; 
    else if (derating_current>=440&&derating_current<500)
         conductor_size=400; 
    else if (derating_current>=500&&derating_current<570)
         conductor_size=500;
    else if (derating_current>=570)
         conductor_size=630;                  
 }
if(conductor_type=='A')
 {
     if (derating_current>=230&&derating_current<260)
        conductor_size=185;
    else if (derating_current>=260&&derating_current<300)
         conductor_size=240;
    else if (derating_current>=300&&derating_current<340)
         conductor_size=300; 
    else if (derating_current>=340&&derating_current<380)
         conductor_size=400; 
    else if (derating_current>=380&&derating_current<440)
         conductor_size=500;
    else if (derating_current>=440)
         conductor_size=630;                  
 }

return conductor_size;
}