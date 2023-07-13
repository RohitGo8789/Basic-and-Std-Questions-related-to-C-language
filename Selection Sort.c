#include<stdio.h>
void SelectionSort(int a[],int n){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        if(min != i){
            int temp;
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }

    }
}


 
 // Function to print an array 
void printArray(int a[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main(){
   int a[] = {2,8,4,6,52,13,87,34,2,3,55};
    int n = sizeof(a)/sizeof(int);
    SelectionSort(a,n);
    printf("The sorted array are: ");
    printArray(a,n);

    
}
