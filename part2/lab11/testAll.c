#include <stdio.h>
#include "max.h"
#include "minim.h"
#include "var.h"

void main(){

int max; 
int Val_min; 
float var_s=0;
int tab[10] = {4,9, 10, 11, 12, 15, 12, 9, 0, 30}; 
int n = 10;
int nvar=sizeof(tab)/sizeof(*tab);



maxim(tab, n, &max);
printf("la valeur maximale = %d", max);

minim (tab, n, &Val_min);
printf("la valeur minimale = %d", Val_min);

variance(tab,nvar,&var_s);
printf("la variance est %.2f",var_s);
return 0;


}
