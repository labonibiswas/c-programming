#include<stdio.h>

//28. Write a program to generate Fibonacci series using recursive function.

int fibonacci(int n){

    if(n==0){
        return 0;
    }else if (n==1)
    {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int term;
    printf("enter number of terms: ");
    scanf("%d",&term);
    printf("fibonacci series upto %d terms is: ",term);
    for(int i=0; i<term; i++){
        printf(" %d",fibonacci(i));
    }

    return 0;
}