#include<stdio.h>
int main(){
    int a[50], size, i, pos, num;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter %d elements for array: ", size);
    for(i = 0; i < size; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the postion from where you want to delete: ");
    scanf("%d", &pos);
    if(pos <= 0 || pos > size){
        printf("Invalid Position");
    }
    else{
        for(i = pos-1; i < size-1; i++){
            a[i] = a[i+1];
        }
        size--;
    }
    printf("Elements of the array are: ");
    for(i = 0; i < size; i++){
        printf("\t%d", a[i]);
    }
    return 0;
}
