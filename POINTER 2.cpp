#include<stdio.h>
int main(){
	int arr[5]={10,20,30,40,50};
	int *ptr1=arr;
	int *ptr2;
	printf("%d\n",*ptr1);
	ptr1++;
	printf("%d\n",*ptr1);
	ptr1--;
	printf("%d\n",*ptr1);
	ptr1=ptr1+3;
	printf("%d\n",*ptr1);
	ptr1=ptr1-2;
	printf("%d\n",*ptr1);
	ptr2=&arr[4];
	int diff=ptr2-ptr1;
	printf("%d\n",diff);
	return 0;
}