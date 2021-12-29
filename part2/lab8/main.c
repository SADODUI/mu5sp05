#include <stdio.h>
#include "max.h"
#include "minim.h"


void main(){

int max; 
int Val_min; 

int tab[7] = {13, 12, 5, 1, 19, 13, 17}; 
int n = 7;



maxim(tab, n, &max);
printf("la valeur maximale = %d", max);

printf("\n");

minim (tab, n, &Val_min);
printf("la valeur minimale = %d", Val_min);

printf("\n");
}
