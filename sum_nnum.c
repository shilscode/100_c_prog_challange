#include<stdio.h>
int sum(int a);

int main(){

printf("the result will be:%d", sum(5));


    return 0;
}

int sum(int a){

if(a==1){
    return 1;
}

int b = sum(a-1) +a;

}