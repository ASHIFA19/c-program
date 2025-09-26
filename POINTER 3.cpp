#include<stdio.h>
int main(){
	int x=10;
	printf("%d\n",x);
	int *p=&x;
	printf("%p\n",p);
	int **pp=&p;
	printf("%p\n",pp);
	return 0;
}