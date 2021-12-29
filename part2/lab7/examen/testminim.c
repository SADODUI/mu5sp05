#include <stdio.h>
#include "minim.h"

void main(){

int val_min; 
int t[5] = {2,5,7,2,9}; 
int n = 5; 

minim(t, n, &val_min);
printf("la valeur minimale = %d", val_min);


}