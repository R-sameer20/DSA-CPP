#include<stdio.h>
#include<stdlib.h>
int main(){

    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);

    (num > 0) ? printf("\nAbsolute value is %d" , num) : printf("\nAbsolute value is %d",(-1)*num) ;
}