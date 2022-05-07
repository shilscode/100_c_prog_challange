#include<stdio.h>
int cube(int a);

int main ()
{
    int b;
printf("enter a number :");
scanf("%d",&b);
printf("%d",cube(b));
}

int cube(int a){
    int c=a*a*a;
    //printf("your ans is : %d",c);
    return c;
}