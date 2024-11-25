# include<stdio.h>

int main(){

    /* %zu Format Specifier: It is used to print size_t, the result type of sizeof. */
    printf("size of char is %zu bytes. \n",sizeof(char));
    printf("size of short is %zu bytes. \n",sizeof(short));
    printf("size of int is %zu bytes. \n",sizeof(int));
    printf("size of long is %zu bytes. \n",sizeof(long));
    printf("size of long long is %zu bytes. \n",sizeof(long long));
    printf("size of float is %zu bytes.\n",sizeof(float));
    printf("size of double is %zu bytes.\n",sizeof(double));
    printf("size of long double is %zu bytes.\n",sizeof(long double));
    printf("size of void is %zu bytes.\n",sizeof(void));
    
    /* C does not have a built-in string class like C++, so string manipulation is done using arrays or character pointers. 
     A string in C always ends with a null terminator (\0), which is automatically added by string literals. */
     
}