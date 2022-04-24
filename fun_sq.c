#include <stdio.h>
//Write a program in C to find the square of any number using the function. 
int sq(int a);

int main(){
    int x;

    printf("enter the number :");
    scanf("%d",&x);

    sq(x);

    return 0;


}

int sq(int a){

    printf("%d",a*a);

    return 0;

}