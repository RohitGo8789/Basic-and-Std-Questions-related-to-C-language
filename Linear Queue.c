#include<stdio.h>
#define n 50
int queue[n];
int f = -1;
int r = -1;

void insert(int num){
    if(r==n-1){
        printf("Queue is overflow");
    }else if(f == -1 && r==-1){
        f=r=0;
        queue[r] = num;
    }else{
        r++;
        queue[r] = num;
    }

    }

void delete(){
    if(f == -1){
        printf("Queue is underflow");
    }else{
        printf("The deleted element from queue is: %d", queue[f]);
        f += 1;
    }
}

void display(){
    if(f == -1){
        printf("Queue is empty");
    }else{
        for(int i = f; i <= r; i++){
            printf("%d", queue[i]);
        }
    }
}

int main(){
    int choice,num;
    while(1){
        printf("\n1.Insert 2.Delete 3.Display 4.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("Enter data: ");
            scanf("%d", &num);
            insert(num);
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("Exited");
            return 0;
            default:
            printf("Invalide choice");
        }
    }
    return 0;
}
