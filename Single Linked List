#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head = NULL,*temp,*newnode;



void printList(){
    temp = head;
    while(temp != NULL){
        printf("\t%d", temp -> data);
        temp = temp -> next;
    }
}
void firstNode(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &(newnode -> data));
    newnode -> next = NULL;
    head = newnode;
    
}

void InsertatBeg(){
    if(head == NULL){
        firstNode();
        return;
    }else{
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &(newnode -> data));
        newnode -> next = head;
        head = newnode;
    }
}

void InsertatEnd(){
    if(head == NULL){
        firstNode();
        return;
    }else{
        temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &(newnode -> data));
    newnode -> next = NULL;
    temp = newnode;
    temp -> next = NULL;
    }
}

void insertAt(){
    int pos;
    printf("Enter position: ");
    scanf("%d", &pos);
    if(pos == 1){
        InsertatBeg();
        return;
    }else{
        temp = head;
        for(int i = 1; i <= pos-1; i++){
           temp = temp -> next;
        }
        if(temp -> next == NULL){
            InsertatEnd();
            return;
        }

    }
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &(newnode -> data));
    newnode -> next = temp -> next;
    temp -> next = newnode;
}

void deleteFirstnode(){
    if(head == NULL){
        printf("Invalid operation");
        return;
    }else{
        temp = head;
        temp = temp -> next;
        free(head);
        head = temp;
        return;
    }
}

void deleteLastnode(){
    temp = head;
    while(temp != NULL){
        temp = temp -> next;
    }
}


int main(){
    char ch;
    while(1){
        printf("\n1. First node 2. Insert at beg 3. Insert at end 4. Insert at any pos 5. Display 6. Delete first node 7. Delete last node 8. Exit\n");
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            firstNode();
            break;
            case 2:
            InsertatBeg();
            break;
            case 3:
            InsertatEnd();
            break;
            case 4:
            insertAt();
            break;
            case 5:
            printList();
            break;
            case 6:
            deleteFirstnode();
            break;
            case 7:
            deleteLastnode();
            break;
            case 8:
            printf("Exit");
            return 0;
            default:
            printf("Invalid choice");
        }
    }
return 0;
}
