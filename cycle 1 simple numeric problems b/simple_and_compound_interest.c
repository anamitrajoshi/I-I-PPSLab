#include<stdio.h>
#include<math.h>
void main()
{
	int p,t,r,simple,compound;
	printf("enter principle amount");
	scanf("%d",&p);
	printf("enter the number of years");
	scanf("%d",&t);
	printf("enter rate of interest");
	scanf("%d",&r);
	simple=(p*t*r)/100;
	compound=p*pow((1+r/100),t);
	printf("the simple interest is %d\n",simple);
	printf("the compound interest is %d",compound);
	return;
	}
	
