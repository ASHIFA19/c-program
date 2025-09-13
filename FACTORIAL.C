#include<stdio.h>
int factorial(int n){
	if(n==0||n==1)//base case
	   return 1;
	else
	   return n*factorial(n-1);//recursion
}
int main(){
	int num=5;
	printf("factorial of %d=%d",num,factorial(num));
	return 0;
}