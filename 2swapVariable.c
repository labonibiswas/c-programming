# include <stdio.h>

void SwapWithThirdVariable(){
    int a=10 ,b=5 ,c ;
    printf("a before swapping: %d\n",a);
    printf("b before swapping: %d\n",b);
    c = a;
    a = b;
    b = c;
    printf("a after swapping: %d\n",a);
    printf("b after swapping: %d\n",b);
}

void swapWithoutThirdVariable(){
    int a=5,b=4;
    printf("A and B before swapping is %d, %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf(" A and B after swapping is %d, %d \n", a, b);
}

int main(){
    SwapWithThirdVariable();
    swapWithoutThirdVariable();

}