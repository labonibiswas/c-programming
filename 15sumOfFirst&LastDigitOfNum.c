#include<stdio.h>

int main(){
    int last, first,num,sum;

    printf("enter a 4 digit number : ");
    scanf("%d",&num);
    first = num/1000;
    last = num%10;
    sum = first + last;
    printf("sum of first and last digit of the number %d is %d",num, sum);
}