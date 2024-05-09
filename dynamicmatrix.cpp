#include<stdio.h>
#include<stdlib.h>
void redArray(int**,int,int);
void displayArray(int**,int,int);
void adddArray(int** ,int**,int**,int,int);
void main(){
	
	int**a;
	int**b;
	int**s;
	int rows,cols,i,j;
	printf("Enter no of row and columm of matrix \n");
	scanf("%d%d",&rows,&cols);
	for(i=0;i<rows;i++)
	{
		*(a+i)=(int*) malloc(sizeof(int)*cols);
		*(b+i)=(int*) malloc(sizeof(int)*cols);
		*(s+i)=(int*) malloc(sizeof(int)*cols);
	}
	printf("Enter element of matrix:\n");
	readArray(a,rows,cols);
	printf("Enter element of second matrix:\n");
	readArray(b,rows,cols);
	addarray(a,b,s,rows,cols);
	printf("\n matrix A is :\n");
	displayArray(a,rows,cols);
	printf("\n matrix B is:\n");
	displayArray(b ,rows,cols );
	printf("\n sum of matrix A and B is\n");
	displayArray(s,rows,cols);
	return 0;
	}
	void readArray(int **x,int r,int c)
	{
		int i,j;
		for(i=0;i<r;<i++){
			for(j=0;j<c;j++){
				scanf("%d",*(x+i)+j)
     	}
	}
	void addArray( int**a,int**b,int**s)
	int r,int (){
		
		int i,j;
		for(i=0;i<r;i++){
			for(j=o;j<c;i++){
				*(*(s+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);			}
		}
	}

	}

