#include <stdio.h>
int main(){

 char mon;
 printf("please enter a Letter :");
 scanf("%c",&mon);
 switch (mon)
 {
case 'a':
     printf("vowel");
     break;
case 'e':
     printf("vowe!");
     break;
case 'i':
     printf("vowe!");
     break;
case 'o':
     printf("vowe!");
     break;    
case 'u':
     printf("vowe!");
     break; 


default:
 printf("this is consonent");
     break;
 }
return 0;

}