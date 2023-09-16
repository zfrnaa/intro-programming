#include <stdio.h>

int main()
{
	int numin; 
	int numakhir, a=1;
	
	do
	{
		printf("Please enter number %d:",a);
		scanf("%d", &numin);
		numakhir=numakhir+numin;
		a++;
	
	}
	while (a<=5);
	
	printf("\nThe total of five numbers is %d", numakhir);
	
}
