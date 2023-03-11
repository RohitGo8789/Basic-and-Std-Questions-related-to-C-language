#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
void createBST(int c);
void inorder(struct node *root);
void preorder(struct node *root);
void postorder(struct node *root);
int heightoftree(struct node *root);

void main(){
    int ch,n,i,d,h;
    while(1){
        printf("\nPress 1 to create the binary tree\n");
        printf("\nPress 2 for inorder traversal\n");
        printf("\nPress 3 for preorder traversal\n");
        printf("\nPress 4 for postorder traversal\n");
        printf("\nPress 5 to evaluate height of the tree\n");
        printf("\nPress 6 to exit\n");
        printf("\nWhat is your choice ?\n");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            printf("Enter the number of nodes: ");
            scanf("%d", &n);
            i = 1;
            while(i <= n){
                printf("Enter the data: ");
                scanf("%d", &d);
                createBST(d);
                i++;
            }
            break;
            case 2:
            printf("The inorder traversal = \n");
            inorder(root);
            break;
            case 3:
            printf("The preorder traversal = \n");
            preorder(root);
            break;
            case 4:
            printf("The postorder traversal = \n");
            postorder(root);
            break;
            case 5: h = heightoftree(root);
            printf("Height is %d \n", h);
            break;
            case 6: exit(0);
            break;
            default:
            printf("Wrong choice\n");

        }
    }
}

void createBST(int c){
    struct node *temp, *root1;
    root1 = root;
    while(1){
        if(root1 == NULL){
            root1 = (struct node*)malloc(sizeof(struct node));
            root1 -> data = c;
            root1 -> left = NULL;
            root1 -> right = NULL;
            root = root1;
            break;
        }else{
            if(c < root1 -> data){
                if(root1 -> left == NULL){
                    temp = (struct node*)malloc(sizeof(struct node));
                    temp -> data = c;
                    temp -> left = NULL;
                    temp -> right = NULL;
                    root1 -> left = temp;
                    break;
                }else{
                    root1 = root1 -> left;
                }
            }else{
                if(root1 -> right == NULL){
                temp = (struct node*)malloc(sizeof(struct node));
                temp -> data = c;
                temp -> left = NULL;
                temp -> right = NULL;
                root1 -> right = temp;
                break;
            }else{
                root1 = root1 -> right;
            }
        }
    }
}
}

void inorder(struct node *root){
    if(root != NULL){
        inorder(root -> left);
        printf("%d", root -> data);
        inorder(root -> right);
    }
}

void preorder(struct node *root){
    if(root != NULL){
        printf("%d", root -> data);
        preorder(root -> left);
        preorder(root -> right);
    }
}

void postorder(struct node *root){
    if(root != NULL){
        postorder(root -> left);
        postorder(root -> right);
        printf("%d", root -> data);
    }
}

int heightoftree(struct node *root){
    int max;
    if(root != NULL){
        int leftsubtree = heightoftree(root -> left);
        int rightsubtree = heightoftree(root -> right);
        if(leftsubtree > rightsubtree){
            max = leftsubtree + 1;
            return max;
        }else{
            max = rightsubtree + 1;
            return max;
        }
    }
}
