#include <stdio.h>
void bubbleSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

            }
        }
    }
}
void printArray(int a[], int n){
    for(int i = 0; i < n ; i++){
        printf("%d ", a[i]);
        
    }
    printf("\n");
}    

int main(){
    int a[] = {2,8,4,6,7,2,3,9};
    int n = sizeof(a)/sizeof(int);
    printf("Elements of array are: ");
    for(int i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }

    bubbleSort(a,n);
    printf("\nSorted array: ");
    printArray(a,n);
    return 0;

}
