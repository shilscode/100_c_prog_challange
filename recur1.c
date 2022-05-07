#include<stdio.h>
int Hlw(int a);

int main ()
{
int x;
printf("enter 1st number :");
scanf("%d",&x);
Hlw(x);
return 0;

}

int Hlw(int a){
    if (a==0){
        return ;

    }
   printf("hello world\n");
   Hlw(a-1);
return 0;
   
}