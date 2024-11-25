#include<stdio.h>

int main(){
    int num,rev=0,OGnum,rem;

    printf("enter a number: ");
    scanf("%d",&num);

    OGnum = num;
    while (num !=0)
    {
        rem = num % 10;
        rev = rev*10 + rem;
        num /=10;
    }
    if(OGnum == rev){
        printf("number is palindrome...");
    }else{
        printf("number is not palindrome...");
    }
}