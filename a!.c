#include <stdio.h>
int main(){

int n, fac;
printf("enter the number=");
scanf("%d",&n);
fac=1;
for (int i=1;i<=n;i++){
 fac= fac*i;
 
}

printf("Factorial will be : %d",fac);
return 0; 
}