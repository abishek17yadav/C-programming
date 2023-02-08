//to calculate area of rectange
/*#include <stdio.h>
int main()
{
	int l=4;
	int b=3;
	printf("the area of rectangle is %d",l*b);
	return 0;
}*/

#include <stdio.h>
int main()
{
	int length,breadth;
	printf("Enter the value of length \n");
	scanf("%d",&length);
	printf("Enter the value of breadth: \n");
	scanf("%d",&breadth);
	int area=length*breadth;
	printf("The area of rectangle is %d",area);
	return 0;
}
