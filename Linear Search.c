#include <stdio.h>
int main(){
    int a[] = {8,3,1,7,4,13,45}; 
    int n = 7; int i, data;
    printf("Elements of array are: ");
    for(int i = 0; i < n; i++){
        printf("\t%d", a[i]);
    }
    printf("\nEnter the data that you want to search for: ");
    scanf("%d", &data);
    for(i = 0; i < n; i++){
        if(a[i] == data){
            printf("Element found at index %d", i);// for printing the position do (i+1) instead of i
            break;
        }
    }if(i == n){
        printf("Element not found");
    }
return 0;    
}
