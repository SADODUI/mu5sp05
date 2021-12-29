#include "var.h"

void variance(int t[], int n, float *var)
{
    float moyenne=0;
    float varience=0;
   
    for(int i=0; i<n;i++){
      moyenne+=t[i];

    }
    moyenne/=n;

    for (int j=0; j<n;j++){
        varience+=(t[j]-moyenne)*(t[j]-moyenne);
       
       
    }
   
    varience/=n;

    *var=varience;
   
}