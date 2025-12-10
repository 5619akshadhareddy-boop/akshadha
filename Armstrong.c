#include<stdio.h>
#include<math.h>
int main(void)
{
	int num, rem, sum=0, count=0, temp;
	printf("Enter any number:");
	scanf("%d",&num);
	temp = num;
	//count the digits
	while(num>0)            
	
	{
		count++; //count=count+1
		num=num/10;
	}
	num=temp;
	//powered sum
	while(num>0)      
	{
		rem = num%10;
		sum = sum+pow(rem,count);
		num =num/10;
	}
	if(temp==sum)
	printf("%d is an Armstrong Number",temp);
else
printf("%d is not an Armstrong Number",temp);	
}
	
