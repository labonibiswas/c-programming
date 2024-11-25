# include <stdio.h>

//29. Write a program to swap two integers using call by value and call by reference methods of passing arguments to a function.


void SwapByValue(int a, int b){
    int c ;
    printf("a and b before swapping: %d, %d\n",a,b);
    
    c = a;
    a = b;
    b = c;
    printf("a and b after swapping: %d, %d\n",a,b);

}


void SwapByReference(int *a, int *b){
    int c ;
    printf("a and b before swapping: %d, %d\n",*a, *b);
    
    c = *a;
    *a = *b;
    *b = c;
    printf("a and b after swapping: %d, %d\n",*a, *b);

}

int main(){
    int a=10, b=20;
    printf("call by value\n");
    SwapByValue(a,b);
    printf("call by reference\n");
    SwapByReference(&a, &b);

}