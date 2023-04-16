#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node {
	int data;
	struct node *next;
};
struct node *f = NULL;
struct node *r = NULL;

void ins(int val);
void del();
void display();

int main()
{
	int ch=3;
	int n,val;
	printf("\n_ _ Main Menu _ _\n\n");
	printf(" 1. Insert \n 2. Delete \n 3. Display \n 4. Exit \n");
	while(ch)
	{
		printf("Enter Choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
			printf("Enter the Size of QUEUE:\n");
			scanf("%d",&n);
			int k = 0;
			while (k<n){
				printf("Enter Data:\n");
				scanf("%d",&val);
				ins(val);
				k++;
			}
			break;
			case 2: del();
			break;
			case 3: display();
			printf("\n");
			break;
			case 4: return 0;
			default: printf("INVALID INPUT!!!\n");
		}
	}
	return 0;
}

void ins(int val)
{
	struct node *ptr;
	ptr = (struct node *)malloc(sizeof(struct node));
	
	ptr->data = val;
	ptr->next = NULL;
	if ((f==NULL)&&(r==NULL)){
		f = r = ptr;
	}
	else{
		r->next = ptr;
		r = ptr;
	}
}
void del(){
	struct node *temp;
	temp = f;
	if ((f == NULL)&& (r == NULL)){
		printf("UNDERFLOW!!!\n");
	}
	else{
		f = f->next;
		free(temp);
	}
}
void display(){
	struct node *temp;
	if ((f == NULL)&&(r == NULL)){
		printf("EMPTY Queue!!!\n");
	}
	else{
		temp = f;
		while(temp != NULL){
			printf("\n%d",temp->data);
			temp = temp->next;
		}
	}
}
