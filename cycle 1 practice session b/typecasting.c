#include<stdio.h>
void main(){
	char ch='a';
	int a,b;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	int sum=a+ch;
	float div;
	div=(float)a/b;
	printf("sum of char and a is %d\n",sum);
	printf("the quotient is %f",div);
	return;
}
