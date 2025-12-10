#include<stdio.h>
int main(void)
{
	int num,rem,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("sum of digits: %d",sum);
}

