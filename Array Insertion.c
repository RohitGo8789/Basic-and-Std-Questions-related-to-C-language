#include<stdio.h>
int main(){
    int a[50], size, i, pos, num;
    printf("Enter size of array: ");
    scanf("%d", &size);
    if(size <= 0 || size > 50){
        printf("Invalid Size");
    }else{
        printf("Enter %d elements for array: ", size);
        for(i = 0; i < size; i++){
            scanf("%d", &a[i]);
        }
        printf("Enter the number which you want to insert:");
        scanf("%d", &num);
        printf("Enter position where you want to insert the number: ");
        scanf("%d", &pos);
        if(pos <= 0 || pos > size){
            printf("Invalid Positon!!");
        }else{
            for(i = size-1; i >= pos-1; i--){
                a[i+1] = a[i];
            }
            a[pos-1] = num;
            size++;
            
            printf("Elements of array after insertion are: ");
            for(i = 0; i < size; i++){
                printf("\t%d", a[i]);
            }
        }
    }
    return 0;
}
