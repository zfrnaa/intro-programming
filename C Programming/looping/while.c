#include <stdio.h>

int main ()
{
	int num, numakhir, a=1;
	
	printf("Please enter multiplication table: ");
	scanf("%d", &num);
	printf("%d Times Table\n\n", num);
	
	while (a<=12)
	{
		numakhir = a*num;
		printf("%d * %d = %d\n", a, num, numakhir); //a*num
		a++;
	}
	
	return 0;
}
