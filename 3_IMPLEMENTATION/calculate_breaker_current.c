#include"cable.h"
#include"math.h"

float calculate_breaker_current(float ampacity)
{
    float breaker_current;
    
    float standard_breaker_ampearage[10]={20,40,60,100,250,320,400,550,600,700};

    for(int i=0 ; i< 10; i++)
    {
        if( ampacity>standard_breaker_ampearage[i]&&ampacity<standard_breaker_ampearage[i+1])
        {
            breaker_current=standard_breaker_ampearage[i+1];
        }
    }

return breaker_current;

}