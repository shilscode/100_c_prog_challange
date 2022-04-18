//Convert Miles to Kilometers KM formula: km = (n x 1.609344)
#include <stdio.h>
int main(){
float Miles;
float km;

printf("please enter the first number:");
scanf("%f",&Miles);
km = (Miles*1.609344);
printf("%f is Equal to %f  KM",Miles,km);
return 0;
}
  
