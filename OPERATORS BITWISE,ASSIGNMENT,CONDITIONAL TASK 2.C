#include<stdio.h>
int main(){
	int number;
	printf("enter an integer:");
	scanf("%d",&number);
	(number>0)?
	   printf("%d is a positive number.\n",number):
	   (number<0)?
	      printf("%d is a negative number.\n",number):
	      printf("the number is zero.\n");
	return 0;
}