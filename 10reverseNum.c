#include<stdio.h>

int main(){
    int num, rem, rev=0, originalNum;
    printf("enter a number: ");
    scanf("%d",&num);

    originalNum = num;
    while (num !=0)
    {
        rem = num % 10;
        rev = rev*10 + rem;
        num /=10;
    }

    printf("reverse of number %d is %d \n",originalNum,rev);   
}