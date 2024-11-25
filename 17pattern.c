#include<stdio.h>

int main(){
    int row=5;

for(int i=1; i<=row; i++){
    if(i<=3){
        printf("*\n");
    }else{
        for(int j=1; j<=(i-3)*2; j++){
            printf("*");
        }
        printf("\n");
    }
    

}
}