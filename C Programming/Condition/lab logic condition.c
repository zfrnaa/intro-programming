#include <stdio.h>

int main()
{
	char employed;
	int worklength;
	printf("Are you Employed Y/N ?\n");
	scanf("%c", &employed);
	
	if(employed=='Y' || employed=='y')
	{
		printf("What is your worklength?\n");
		scanf("%d", &worklength);
		if (worklength>=5){
			printf("Your credit card application is accepted");
		}
		if (worklength<5){
			printf("\nPlease provide a guarantor");
		}
	}
	if(employed=='N' || employed=='n')
	{
		printf("Your credit card application is rejected");
	}
}
