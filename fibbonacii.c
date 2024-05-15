// a c program to perform fibbonacii series  
#include<stdio.h>
#include<conio.h>
#include<math.h>
int  main()
{
    int  n,i,result;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Fibonacci number up to %d terms :\n",n);
	result =   Fibonacci_series(n); 	
        printf("%d \n", result);
    
    return 0;
}
int Fibonacci_series(int num){
    if(num==1 || num ==2){
        return 1;
    }
    else{
        return Fibonacci_series(num-1)+Fibonacci_series(num-2);

    }
}




