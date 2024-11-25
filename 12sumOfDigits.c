#include<stdio.h>

int main(){
    int num,number,sum=0,digit;
    printf(" enter a number: ");
    scanf("%d", &num);
    number=num;
    for( ; num > 0 ; num/=10){
        digit = num%10;
        sum += digit;
    }
    printf("sum of the digits of the number %d is %d",number, sum);
}