#include<stdio.h>
int max(int a,int b);

int main ()
{
int x,y;
printf("enter 1st number :");
scanf("%d",&x);
printf("enter 2nd number :");
scanf("%d",&y);
printf("%d",max(x,y));
}

int max(int a,int b){
    if(a>b){
        printf("%d",a);
    }
    else{
     return b;
    }
    
}