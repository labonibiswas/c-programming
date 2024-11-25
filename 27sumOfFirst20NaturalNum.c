#include<stdio.h>

//27. Write a program to calculate sum of first 20 natural numbers using recursive function.

int sum(int n){
    if(n==0){
        return 0;
    }
    return n + sum(n-1);
    
}

int main(){
    int n=20;
      printf("sum of first 20 natural number is %d",sum(n));
}