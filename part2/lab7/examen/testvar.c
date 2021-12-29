#include "var.h"

int main(){
int tab[]={2,5,7,2,9};
int n=sizeof(tab)/sizeof(*tab);
float var_s=0;

variance(tab,n,&var_s);
printf("la variance est %.2f",var_s);
return 0;
}