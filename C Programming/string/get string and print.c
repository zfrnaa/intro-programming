#include <stdio.h>

int main()

{
	char name[50], ic[16], matrics[10], codesub[10], subname[50];
	
	printf("Subject Registration System UTHM");
	printf("\n---------------------------------");
	printf("\nPlease enter your full Name : \n");
	gets(name);
	printf("\nPlease enter your I/C number : \n");
	scanf("%s", &ic);
	printf("\nEnter your Matrics Number : \n");
	scanf("%s", &matrics);
	printf("\nEnter the subject code : \n");
	scanf("%s", &codesub);
	printf("\nEnter the subject name : \n");
	scanf("%s", subname);
	
	//output
	printf("\nName of the student : %s", name);
	printf("\nI/C Number : %s", ic);
	printf("\nMatrics Number : %s", matrics);
	printf("\nCode and Name of Subject : %s", codesub);
	printf(" %s", subname);
	printf("\n--------------------------------");
}
