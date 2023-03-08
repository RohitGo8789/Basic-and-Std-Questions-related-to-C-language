#include <stdio.h>
#define n 10
int stack[n];
int top = -1;

void push(int num){
    if(top == n-1){
        printf("Stack is overflow");
    }else{
        top++;
        stack[top] = num;
    }
}

void pop(){
    if(top == -1){
        printf("Stack is underflow");

    }else{
        printf("Popped element is:%d", stack[top]);
        top--;
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty");
    }else{
        for(int i = top;i >= 0; i--){
            printf("%d\t", stack[i]);
        }
    }
}

int main(){
    int choice,num;
    while(1){
        printf("\n1. Push 2. Pop 3. Display 4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("Enter element: ");
            scanf("%d", &num);
            push(num);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("Exit");
            return 0;
            default:
            printf("Invalid choice");
        }
    }
    return 0;
}
