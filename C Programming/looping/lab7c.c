#include <stdio.h>
#include <math.h>

int main()
{
	float saving=1000, annual=0.05, newsav;
	int y;
	
	for (y=1; y<=10; y++)
	{
		newsav=saving*pow(1+annual,y);
		printf("\n The amount of deposited at the end of %d-year is RM%.2f",y,newsav);
	}
	
} 
