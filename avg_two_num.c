//C program to find Sum and Average of two numbers
#include <stdio.h>
int main(){
int a;
int b;
float avg;
printf("please enter the first number:");
scanf("%d",&a);
printf("please enter the second number:");
scanf("%d",&b);
avg = (a+b)/2;
printf("Result is %f",avg);
return 0;
}