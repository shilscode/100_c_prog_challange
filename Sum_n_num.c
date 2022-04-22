#include <stdio.h>
int main(){

int num;
int sum;
sum=0;
printf("enter a number:");
scanf("%d",&num);
for(int i=0;i<=num;i++){
    sum=sum+i;
printf("%d\n",i );
 }

printf("Sum of all these number will be %d\n",sum );
return 0;
}
