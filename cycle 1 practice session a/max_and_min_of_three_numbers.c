#include<stdio.h>
void main()
{
	int a,b,c,max,min;
	printf("enter three values");
	scanf("%d %d %d",&a,&b,&c);
	max=a>b?(a>c?a:c):(b>c?b:c);
	min=a<b?(a<c?a:c):(b<c?b:c);
	printf("the greatest of three numbers is %d\n",max);
	printf("the smallest of the three numbers is %d",min);
	return;
	}
