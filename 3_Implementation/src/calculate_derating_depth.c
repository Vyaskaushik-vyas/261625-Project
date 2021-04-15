#include"cable.h"
#include"math.h"

float calculate_derating_depth(float site_depth,float rating_factor)
{
    float derating_depth_value;

    if(site_depth>=90&&site_depth<105)
    {
        if(rating_factor<=25)

        derating_depth_value=0.99;

        else if(rating_factor>25&&rating_factor<=300)

        derating_depth_value=0.98;

        else if (rating_factor>300)
        
        derating_depth_value=0.97;  
    }
    else if(site_depth>=105&&site_depth<180)
    {
        if(rating_factor<=25)

        derating_depth_value=0.98;

        else if(rating_factor>25&&rating_factor<=300)

        derating_depth_value=0.97;

        else if (rating_factor>300)
        
        derating_depth_value=0.96;  
    }
    else if(site_depth>=180)
    {
        if(rating_factor<=25)

        derating_depth_value=0.95;

        else if(rating_factor>25&&rating_factor<=300)

        derating_depth_value=0.93;

        else if (rating_factor>300)
        
        derating_depth_value=0.91;  
    }


return derating_depth_value;
}