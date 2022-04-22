#include <stdio.h>
int main(){

int num;
int res;


do{
    printf("enter a number:");
    scanf("%d",&num);
    printf("%d\n",num);
    if (num%7 == 0){
        break;
    }

 }while(1);
printf("f");
return 0;
}