# Project in Algorithms & Programming

It is a project based on what we team 1 and everyone have been learned in this course. It can be an indicator for all of us.

### Team 1 Member
1. Adib
2. Nabil
3. Fahmi
4. Alif
5. Najmi
6. Zafran (me)

> We required to make a system based on the question given. Our lecturer did a polling before give the question number to us.
> System that created was for a company named as TECRAFT Inc. It is a Payroll System.

The system does include various function, struct and array. Also included for looping and condition. Not to mention, there is also
visual part where we change the color and align the display for list of employee information inserted.

The functions implemented are insurance(), tax(), DisplayAvg() and most importantly main(). All for determining the insurance fee, tax fee, 
displaying average of salary, insurance fee, tax and net salary. Main method/function is where list of employee being displayed.

## Notes
A **struct** in C is a user-defined data type that groups together related data elements of different types. 
Structs are useful for representing real-world objects, such as a student record, a product, or a point in 2D space.

Example:
```
struct info
{
	char name[50][50],temp;
	int id [50], age [50];
	float gsalary [50], netsalary[50];
};
```

This struct defines a new data type called info that has six members: name, temp, id, age, gsalary and netsalary.

> [!IMPORTANT]
> Please follow standard naming convention for readability and compiler able to detect as variable.
> first letter lowercase, then first letter of other word should be in uppercase. Ex: netSalary
> 
> You could also write it with underscore. net_Salary

<br>
To create a struct variable, you use the struct keyword followed by the name of the struct type. 
For example, the following code creates a struct variable called emp: 

`struct info emp`

You can then access the members of the struct variable using the dot operator. For example, the following code prints the student's 
name to the console:
`printf("%s",emp.name[i]);`

-------------------------------------------------------------------------------------------------------------------------------------

**Functions** in C are reusable blocks of code that can be used to perform a specific task. For example, you might have a function 
to print a message to the console or to calculate the sum of two numbers.

Functions can be called from other functions, which allows you to break down your program into smaller, more manageable pieces.

To define a function in C, you use the function keyword followed by the name of the function and a list of parameters. 
The body of the function contains the code that will be executed when the function is called.

Here is an example of a function in C:
```
void DisplayAvg(float avgSalary, float avgInsFee, float avgTax, float avgNetSal)
{
	printf("Average gross salary collected: RM%.2f", avgSalary);
	printf("\nAverage insurance fee collected: RM%.2f", avgInsFee);
	printf("\nAverage income tax: RM%.2f", avgTax);
	printf("\nAverage net salary: RM%0.2f", avgNetSal);	
}
```

This function takes four float as parameters and print those float variables.

To call the function, you simply use the function name followed by parentheses and a list of arguments. 

For example, the following code calls the `add()` function to add the numbers 1 and 2 and prints the result to the console. 
It is called in main function or anywhere it want to be display:
```
int result = add(1, 2);
printf("%d\n", result);
```

Structs and functions can be used together to create powerful and reusable code. 
For example, you could create a struct to represent a student record and then create a function to print the student record to the console.
```
void print_student(struct student s)
{
  printf("Student ID: %d\n", s.id);
  printf("Student Name: %s\n", s.name);
  printf("Student GPA: %f\n", s.gpa);
}
```

This function takes a student record as a parameter and prints the record to the console.

To use the function, you would simply pass a student record to the function as an argument. 
For example, the following code creates a student record and then calls the `print_student()` function to print the record to the console:
```
struct student s;
s.id = 12453;
strcpy(s.name, "John Doe");
s.gpa = 3.5;

print_student(s);

//Print
//Student ID: 12345
//Student Name: John Doe
//Student GPA: 3.5
```

> [!NOTE]
> 0x00A is ACII code. You could search for it for more information if you want.
