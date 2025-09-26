#include<stdio.h>
int main(){
	int a=60;
	int b=13;
	int result=0;
	printf("a=60(binary 0011 1100)\n");
	printf("b=13(binary 0000 1101)\n\n");
	result=a&b;
	printf("bitwise AND (a&b)=%d\n",result);
	result=a|b;
	printf("bitwise OR (a|b)=%d\n",result);
	result=a^b;
	printf("bitwise XOR (a^b)=%d\n",result);
	result=a<<2;
	printf("left shift (a<<2)=%d\n",result);
	result=a>>2;
	printf("right shift (a>>2)=%d\n",result);
	return 0;
}
	