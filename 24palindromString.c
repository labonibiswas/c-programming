#include<stdio.h>

// 24. Write a program to read a string and check for palindrome without using string related function.

int main(){
    char str[20];
    int length=0,flag=1;
    printf("enter a string : ");
    scanf("%s",str);
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    
    for(int i=0; i<length/2; i++){
        if(str[i]!=str[length-1-i]){
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        printf(" palindrom");
    }else{
        printf("not palindram");
    }
    
return 0;
}