#include <stdio.h>
#define n 50
int queue[n];
int f = -1;
int r = -1;

void insert(int num){
    if((r+1)%n == f){
        printf("Queue is overflow");
    }else if(f == -1 && r == -1){
        f=r=0;
        queue[r] = num;
    }else{
        r = (r+1)%n;
        queue[r] = num;
    }
}

void delete(){
    if(f == -1){
        printf("Queue is underflow");
    }else if(f == r){
        f=r=-1;
    }else{
        printf("The deleted element from queue is: %d", queue[f]);
        f = (f+1)%n;
    }
}

void display(){
    int i = f;
    if(f == -1 && r == -1){
        printf("Queue is empty");
    }else{
        while(i != r){
            printf("\t%d", queue[i]);
            i = (i+1)%n;
        }
        printf("\t%d", queue[r]);
    }
}

int main(){
    int choice,num;
    while(1){
        printf("\n1.Insert 2.Delete 3.Display 4.Exit\n");
        printf("Enter choice: ");
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
            printf("Invalid choice");
        }
    }
    return 0;
}
