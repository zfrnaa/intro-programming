#include <stdio.h>

int main()
{
	float CGPA;
	printf("This is Class of Graduation UTHM system");
	
	printf("\nEnter your CGPA: ");
	scanf("%f", &CGPA);
	
	if (CGPA>=3.70){
		printf("\nFirst class of Honors");
	}
	else if (CGPA>=3.00 && CGPA<=3.69){
		printf("\nUpper Second class of Honors");
	}
	else if (CGPA>=2.30 && CGPA<=2.99){
		printf("\nLower Second class of Honors");
	}
	else if (CGPA>=2.00 && CGPA<=2.29){
		printf("\nThird class honors");
	}
	else{
		printf("\nFailed");
	}
	
	return 0;
}
