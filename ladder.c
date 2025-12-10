#include<stdio.h>
int main(void)
{
	float actualprice, discount, finalprice;
	printf("Enter the Actual price:");
	scanf("%f",&actualprice);
	if(actualprice>=5000)
	    discount = actualprice*20/100;
	else if (actualprice>=2000 && actualprice<5000)
	     discount = actualprice*10/100;
	else if(actualprice<2000)
		  discount = actualprice*5/100;
	finalprice = actualprice-discount;
	printf("Discount: %f",discount);
	printf("\nFinal price: %f",finalprice);
}
