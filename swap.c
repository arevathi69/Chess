#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	printf("\nThe numbers before swapping is %d %d ",a,b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("\nThe numbers after swapping is %d %d ",a,b);
	return 0;
}
