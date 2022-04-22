#include <stdio.h>
int main(){

int tab;
int res;

printf("enter a number:");
scanf("%d",&tab);
for(int i=1;i<=10;i++){
    printf("%d*%d=%d\n", tab,i,tab*i);
    
// printf("%d * %d=%d",tab,i,res );
 }


return 0;
}
