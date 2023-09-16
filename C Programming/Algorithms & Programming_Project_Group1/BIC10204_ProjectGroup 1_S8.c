#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double insurance (int);
float tax(float);
void DisplayAvg (float,float,float,float);
double taxd,insd;
float avgSalary,avgInsFee,avgTax,avgNetSal;

//struct  (Adib)
struct info{
	char name[50][50],temp;
	int id [50], age [50];
	float gsalary [50], netsalary[50];
};

//main  (Nabil)
int main ()
{
	struct info emp;
	
	system("COLOR 74");
	int process;
	float totalSal = 0, totTax = 0, totIns = 0, totNet = 0;
	
	printf("Welcome to the Payroll of TECRAFT Inc.\n");
	printf("\nPress enter to continue using this system\n");
	int enter = 0x00A;
	enter = getchar();
	
	printf ( "\nHow many employee you want to insert : ");
	scanf ( "%d",&process);
	system("cls");

//output and looping  (Najmi)
	int i, ins;	
	for (i =0; i<process; i++)
	{
		printf("\n===========================================");
		printf("\nEnter the name of the employee (max 6 char): ");
		scanf("%c",&emp.temp);
		scanf("%[^\n]",emp.name[i]);
		printf("\nEnter the age of the employee   \t   : ");
		scanf ("%d",&emp.age[i]);
		printf("Enter the employee ID \t : ");
		scanf ("%d",&emp.id[i]);
		printf("Enter the salary \t : ");
		scanf ("%f",&emp.gsalary[i]);
		printf("\n===========================================");
		
		
		totalSal = totalSal + emp.gsalary[i];
		avgSalary = totalSal/process;
		
		totIns = totIns + insurance(emp.age[i]);
		avgInsFee = totIns/process;
		
		totTax = totTax + tax(emp.gsalary[i]);
		avgTax = totTax/process;
		
		totNet = totNet + (emp.gsalary[i] - insurance(emp.age[i]) - tax(emp.gsalary[i]));
		avgNetSal = totNet/process;
	}
	
//interface (Zulfahmi)	
	system("cls");
	printf("TECRAFT Inc. Employees Payroll details as below: \n");
	printf("\n____________________________________________________________________________________________________");
	printf("\n Name    \tID \t Age \t Insurance \t Gross Salary \t Net Salary");
	
	
	int j;
	for (j = 0; j < process; j++)
	{
	    printf("\n %s     \t%d \t %d \t ", emp.name[j], emp.id[j], emp.age[j]);
		printf("RM%0.2f",insurance(emp.age[j]));	
	    printf("\t RM%.2f ", emp.gsalary[j]);
	    emp.netsalary[j] = (emp.gsalary[j] - insurance(emp.age[j]) - tax(emp.gsalary[j]));
	    printf("\t RM%.2f", emp.netsalary[j]);
	}
	
	
	printf("\n====================================================================================================\n");
	DisplayAvg(avgSalary,avgInsFee,avgTax,avgNetSal);
	printf("\n====================================================================================================");
	
}

//function (Zafran)
double insurance(int age)
{
	float insd =0;
	
	// Condition (Aliff & Zafran)
	if (age >= 20 && age <= 35)
	{
		return insd =+ 110;
	}
	else if (age >= 36 && age <= 65)
	{
		return insd =+ 160;
	}
	else if (age>65)
	{
		return insd =+ 250;
	}
}

float tax(float gsalary)
{	
	do
	{
		// Condition (Aliff & Zafran)
		if(gsalary>=500 && gsalary<=999)
		{
		return taxd=gsalary*(0.0/100);
		printf("0%");
		}
		else if(gsalary>=1000 && gsalary<=2999)
		{
		return taxd=gsalary*(2.5/100);
		printf("2.5%");
		}
		else
		{
		return taxd=gsalary*(5.0/100);
		printf("5.0%");
		}
	}
	while(gsalary<499);
}

void DisplayAvg(float avgSalary, float avgInsFee, float avgTax, float avgNetSal)
{
	printf("Average gross salary collected: RM%.2f", avgSalary);
	printf("\nAverage insurance fee collected: RM%.2f", avgInsFee);
	printf("\nAverage income tax: RM%.2f", avgTax);
	printf("\nAverage net salary: RM%0.2f", avgNetSal);	
}
