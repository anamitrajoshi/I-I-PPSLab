#include<stdio.h>
#include<math.h>
int main(){
	float i,j,k=-1,x,sum=1;
	printf("enter value of x");
	scanf("%f",&x);
	for(i=1,j=2;i<=3;i++,j=j+2)
	{
		sum=sum+(pow(k*x,i)/j);
	}
	printf("the sum is %f",sum);
	return 0;
}
