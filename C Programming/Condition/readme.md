# What is Condition?

Conditions in C are used to make decisions. They allow you to control the flow of execution of your program by choosing 
which block of code to execute based on the value of a condition.

----
The most common condition statement in C is the **if** statement. The **if** statement has the following syntax:
```
if (condition) {
  // code to execute if the condition is true
} else {
  // code to execute if the condition is false
}
```

The condition can be any expression that evaluates to a boolean value. 

If the condition is true, the code in the if block will be executed. 

If the condition is false, the code in the else block will be executed.

For example, the following code uses an if statement to print a different message to the console depending on the value of the variable age:
```
int age = 18;

if (age >= 18) {
  printf("You are an adult.\n");
} else {
  printf("You are not an adult.\n");
}
```

If the value of the variable age is greater than or equal to 18, the message "You are an adult." will be printed to the console. 
Otherwise, the message "You are not an adult." will be printed to the console.

----
You can also use **else if** statements to create more complex conditions. The **else if** statement has the following syntax:
```
if (condition1) {
  // code to execute if condition1 is true
} else if (condition2) {
  // code to execute if condition1 is false and condition2 is true
} else {
  // code to execute if condition1 and condition2 are both false
}
```

The **else if** statements are evaluated in order from top to bottom. 

If the first condition is true, the code in the corresponding if block is executed and the other **else if** statements are skipped. 

If the first condition is false, the next **else if** statement is evaluated. If all of the conditions are false, the code in the else block is executed.

For example, the following code uses an **else if** statement to print a different message to the console depending on the value of the variable grade:
```
char grade = 'A';

if (grade == 'A') {
  printf("You got an A!\n");
} else if (grade == 'B') {
  printf("You got a B.\n");
} else if (grade == 'C') {
  printf("You got a C.\n");
} else {
  printf("You got a D or F.\n");
}
```

If the value of the variable grade is 'A', the message "You got an A!" will be printed to the console. 

If the value of the variable grade is 'B', the message "You got a B." will be printed to the console, and so on. 

If the value of the variable grade is not 'A', 'B', or 'C', the message "You got a D or F." will be printed to the console.

By understanding how to use conditions, you will be able to write more powerful and flexible C programs.

-----
### Here are some additional tips for using conditions in C:

- Use parentheses to group conditions together to make your code more readable and easier to understand.
- Use nested conditions to create complex conditions.
- Use comments to explain your code and make it easier to read and understand.
- Test your code thoroughly to make sure it works as expected.

<br>

> [!NOTE]
> I hope this gives you a basic understanding of conditions in C. If you are interested in learning more, there are many resources available online and in libraries.
