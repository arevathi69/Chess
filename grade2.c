#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s1,s2,s3,s4,s5,per;
	printf("Enter the marks in five subjects:\n");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	per=(s1+s2+s3+s4+s5)/5;
	if(per>100)
	{
		printf("You entered wrong marks\n");
	}
	else if(per>=85)
	{
		printf("Grade A \n");		
	}
	else if(per>=70)
	{
		printf("Grade B \n");
	}
	else if(per>=55)
	{
		printf("Grade C\n");
	}
	else if(per>=40)
	{
		printf("Grade D \n");
	}
	else if (per<40)
	{
		printf("Grade F\n");
	}
	return 0;
}
