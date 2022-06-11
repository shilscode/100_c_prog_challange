#include<stdio.h>
int main (){

int adhhar[5];
int *ptr=&adhhar[0];
for (int i=0; i<5; i++){
    printf("%d index will be :",i);
    scanf("%d",(ptr+i));
}

for (int i=0; i<5; i++){

printf("%d index will be  : %d\n",i,*(ptr+i));

}

}