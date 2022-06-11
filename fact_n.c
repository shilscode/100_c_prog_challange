#include<stdio.h>
int Fact(int n);

int main(){

printf("the result will be:%d", Fact(5));


    return 0;
    }
int Fact(int n){
    if (n==0){
        return 1;
    }

int a= Fact(n-1) *n;

return a ;

}
