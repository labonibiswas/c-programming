#include<stdio.h>

int main(){
    int a = 6, b = 2;

    printf("A = %d , B = %d \n", a,b);
    a++;
    b++;
    printf("A and B after postfix increment operator: %d, %d \n", a, b);
    ++a;
    ++b;
    printf("A and B after prefix increment operator: %d, %d \n", a, b);
    a--;
    b--;
    printf("A and B after postfix decrement operator: %d, %d \n", a, b);
    --a;
    --b;
    printf("A and B after prefix decrement operator: %d, %d \n", a, b);
}