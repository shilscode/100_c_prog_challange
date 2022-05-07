#include<stdio.h>
int sum(int a);

int main ()
{
int x;
printf("enter 1st number :");
scanf("%d",&x);
printf ("%d",sum(x));
return 0;

}

int sum(int a){
    if (a==1){
        return 1;

    }

   int sumn = a+sum(a-1);
return sumn;
   
}