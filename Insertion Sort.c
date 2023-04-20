#include<stdio.h>
void InsertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int temp = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > temp){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;

    }


}
void printArray(int a[], int n){
    for(int i = 0; i < n ; i++){
        printf("%d ", a[i]);
        
    }
    printf("\n");
}
int main(){
    int a[] = {2,8,4,6,52,13,87,34,2,3,55};
    int n = sizeof(a)/sizeof(int);
    InsertionSort(a,n);
    printf("The sorted array are: ");
    printArray(a,n);

}
