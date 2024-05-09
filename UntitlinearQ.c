#include<stdio.h>
#include<conio.h>
#define SIZE 10
struct Queue{
	int rear,front;
	int queue[SIZE];
	
	
};

typedef struct Queue qe;

void insertItem(qe*);
void deleteItem(qe*);
void displayItem(qe*);
int main(){
	int ch;
	qe *q;
	q->rear= -1;
	q->front = 0;
		printf("this ele");
	printf("\n Menu for programs:\n\n");
	printf("\n\n1. insert 2.delete 3.Display\n\n");
	do{
		printf("\n Enter the choice\n");
		scanf("%d",&ch);
		switch(ch){
			
			case 1:
				insertItem(q);//calling the function
				break;
			case 2:
				deleteItem(q);
				break;
			case 3:
				displayItem(q);
				break;
			default:
			printf("Your choice is invalid \n");		
		}
		
		
	} 
	while(ch<10);
	getch();
	return 0;
	
	
}
void insertItem(qe *q){
	int ele;
	printf("Enter the data to be inserted\n\n");
	scanf("%d",&ele);
	if(q->rear==SIZE-1){
		printf("Queue is full\n");
	}
	else{
		q->rear++;
		q->queue[q->rear]=ele;
	}	
}
void deleteItem(qe *q){
	int ele;
	if(q->rear<q->front){
		printf("Queue is Empty");
	}
	else{
		printf("delete item is \n");
		ele = q->queue[q->front];
		ele=q->front++;
		printf("delete item is %d",ele);
	}
	
	
}
void displayItem(qe *q){
	int i;
	if(q->rear <q->front){
		printf("Queue is empty");
		
	}
	else{
		for(i=q->front;i < q->rear;i++){
			printf("\n%d\n",q->queue[i]);
		}
	}
	
	
	
	
	
	
	

	
	
}






























