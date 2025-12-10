//Simple calculator prograns using switch - case statement
#include <stdio.h>
int main(void)
{
	int a,b,add,sub,mul,mod;
	char op;
	float div;
	printf("Enter the operator:");
	scanf("%c",&op);
	printf("Enter any two values:\n");
	scanf("%d%d",&a,&b);
	switch(op)
	{
	case '+': 	add = a+b;
				printf("Addition: %d",add);
				break;
	case  '-':   sub = a-b;
	             printf("Substraction: %d",sub);
				 break;
	case  '*':	mul	=a*b;
		        printf("Multiplication: %d",mul);
				break;
	case  '/':	div = (float)a/b;
			    printf("Division: %f",div);
			    break;
	case  '%':	mod = a%b;
		         printf("Remainder: %d",mod);
				 break;
	default :	printf("Sorry! Invalid option...:(");		 
	}
}