#include<stdio.h>

int main(){
    float a,b,c,max;
    printf("enter three number A, B and C : ");
    scanf("%f%f%f", &a,&b,&c);

    max = (a>b)? (a>c? a : c) : (b>c ? b:c);
    printf("the maximum number is %f \n", max);
}