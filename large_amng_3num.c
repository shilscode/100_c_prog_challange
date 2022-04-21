//C program to findlargest among three numbers
#include <stdio.h>
int main(){
int a;
int b;
int c;
float avg;
printf("please enter the first number:");
scanf("%d",&a);
printf("please enter the second number:");
scanf("%d",&b);
printf("please enter the Third number:");
scanf("%d",&c);
if (a>b && a>c){
printf("Result is %d",a);
}
else if(b>a && b>c){
printf("Result is %d",b);
}

else {
printf("Result is %d",c);
}


return 0;
}