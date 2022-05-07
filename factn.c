#include<stdio.h>
float sum(float a);

float main ()
{
float x;
printf("enter 1st number :");
scanf("%f",&x);
printf ("%f",sum(x));
return 0;

}

float sum(float a){
    if (a==1){
        return 1;

    }

   float sumn = a*sum(a-1);
return sumn;
   
}