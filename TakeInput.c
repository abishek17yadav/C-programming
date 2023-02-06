#include <stdio.h>
int main()  
{
	int a,b;
	printf("Enter the value of a\n");
	scanf("%d",&a);                   //& -- address of a  %d - format specifier
	printf("Enter the value of b \n");
	scanf("%d",&b);
	printf("the sum of a and b is %d",a+b);
	return 0;// to successfully execute the program
	
}
