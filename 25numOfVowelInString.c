#include<stdio.h>
#include<ctype.h>

//25. Write a program to accept a string and count the number of vowels present in this String

int main(){
    char str[20],ch;
    int count=0;

    printf("enter a string: ");
    fgets(str,sizeof(str),stdin);

    for(int i=0; str[i] !='\0';i++){
        ch = tolower(str[i]);
        if(ch=='a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u'){
            count++ ;
        }
    }

    printf("number of vowel in the string is %d", count);

}