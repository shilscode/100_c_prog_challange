#include<stdio.h>
float temp (float f);

int main(){

printf("the result will be:%0.2f", temp(100));


    return 0;
}
float temp (float f){
   float  c = ((f-32)*5)/9;



    return  c;
}