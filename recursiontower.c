#include<stdio.h>
#include<math.h>
void  toh(int disk,int source ,int aux, int dest){
    if(disk==1){
        printf("%d to %d \n",source, dest);
    }

    if(disk>0){

        toh( disk-1 , source, dest ,  aux);
        printf("%d to %d",source,aux,dest);
        toh(disk-1, aux,source,dest);

    }
}
void  towerofHanoi(int disk,int source ,int aux, int dest){
    if(disk==1){
        printf("inside indirect recursiv function %d to %d \n",source, dest);
    }
     else if(disk>1){
        toh( disk-1 , source, dest ,  aux);
        printf(" inside indirect recursive $d to %d",source,aux);
        toh(disk-1, aux,source,dest);

    }
}

void fib_n(int num){
	if(num==1){
		return 1;
	}
	else{
		printf("\n\n%d\n",num);
		return fib_n(num-1);
	}
}
    
int main(){
    int disk,source,aux, dest;
    toh(3,1,2,5);
    towerofHanoi(5,4,6,7);
    fib_n(6);
  	
    
    return 0;
}
