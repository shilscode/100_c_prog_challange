#include <stdio.h>
int main(void) {
    int input;
    printf("how many days you wants to convert:" );
    scanf("%d",&input);
 int days,d;
 int months;
 int year;
 year=input/365;
 input=input%365;
 months=input/30;
 days=input%30;
 printf("Year:%d, Month: %d,day:%d", year,months,days);
 return 0;
}