#include <stdio.h>
int main(){
 int day ;
 printf("please enter a day :");
 scanf("%d",&day);
 switch (day)
 {
case 1:
     printf("Sundauy,wohhooo !!! no work!");
     break;
case 2:
     printf("Monday,work!");
     break;
case 3:
     printf("Tuesday,work!");
     break;
case 4:
     printf("Wednesday,work!");
     break;    
case 5:
     printf("Thursday,work!");
     break; 
case 6:
     printf("Friday,work!");
     break; 
case 7:
     printf("Saturday,work!");
     break; 
default:
 printf("enter  a number between 1 to 7");
     break;
 }





    return 0;

}