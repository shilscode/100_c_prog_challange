//C Program to check whether number is EVEN or ODD
#include <stdio.h>
int main(){
int a;

printf("please enter the  number:");
scanf("%d",&a);
if (a%2==0){
printf("this number is  even ");  
}
else{
    printf("this number is  odd ");
}

return 0;
}