#include<stdio.h>

int main(){
    float a,b;
    printf("Enter two number A and B : ");
    scanf("%f%f", &a, &b);

    if( a > b ){
        printf("A is greater then B \n");
    }else{
        printf("B is greater then A \n");
    }
}