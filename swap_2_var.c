//Swap two Variable’s values using Third variable
#include <stdio.h>
int main(){
int a;
int b;
int c;

printf("please enter the first number:");
scanf("%d",&a);
printf("please enter the second number:");
scanf("%d",&b);
c=a;
a=b;


printf("Result is %d,%d",a,c);
return 0;
}