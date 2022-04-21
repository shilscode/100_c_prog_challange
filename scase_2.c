#include <stdio.h>
int main(){
 int mon ;
 printf("please enter a month number :");
 scanf("%d",&mon);
 switch (mon)
 {
case 1:
     printf("January , 31 days!");
     break;
case 2:
     printf("Feb , 28 days!");
     break;
case 3:
     printf("March , 30 days!");
     break;
case 4:
     printf("April , 31 days!");
     break;    
case 5:
     printf("May , 30 days!");
     break; 
case 6:
     printf("June , 31 days!");
     break; 
case 7:
     printf("july, 30 days!");
     break; 
case 8:
     printf("Augast, 31 days!");
     break;    
case 9:
     printf("September , 30 days!");
     break; 
case 10:
     printf("october , 31 days!");
     break; 
case 11:
     printf("November, 30 days!");
     break; 
case 12:
     printf("December , 31 days!");
     break; 

default:
 printf("enter  a number between 1 to 12");
     break;
 }
return 0;

}