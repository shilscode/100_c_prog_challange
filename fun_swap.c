#include <stdio.h>
//Write a program in C to swap two numbers using function. 
int swp(int a,int b);

int main(){
    int x;
    int y;

    printf("enter the number :");
    scanf("%d",&x);
    printf("enter the number :");
    scanf("%d",&y);

    swp(x,y);



}

int swp(int a,int b){
     
a=a*b;//a=200 (10*20)    
b=a/b;//b=10 (200/20)    
a=a/b;//a=20 (200/10)  
    printf("\nAfter swapping: n1 = %d, n2 = %d \n\n",a,b);

    return 0;  
    

}