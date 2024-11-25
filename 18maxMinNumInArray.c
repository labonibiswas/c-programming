#include<stdio.h>

int main(){
    int n;

    printf("enter number of element in the array : ");
    scanf("%d",&n);

    int arr[n];
    printf("enter %d number : ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int smallest = arr[0];
    for(int i=1; i<n; i++){
        if(largest<arr[i]){
            largest = arr[i];
        }

        if(smallest>arr[i]){
            smallest = arr[i];
        }
    }

    printf("lastest number in the array is %d and smallest number in the array is %d",largest,smallest);
}