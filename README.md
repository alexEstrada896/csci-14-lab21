1. (10 pts) Write a complete program in C++ that helps a local zoo keep track of how many pounds of food each of its three monkeys eats each day during a typical week.

Your program will store this information in a 2D 3 x 5 array, where each row represents a different monkey and each column represents a different day of the week. The program should first have the user input the data for each monkey. Then it should create a report that includes the following information:

Average amount of food eaten per day by the whole family of monkeys.
The least amount of food eaten a day during the week by any one monkey (including which monkey).
The greatest amount of food eaten a day during the week by any one monkey (including which monkey).
Your program must implement input validation: Do not accept negative numbers for pounds of food eaten.

Keep one digit after the decimal point for your floating-point outputs.

 

Sample input and output:

How many pounds of food did Monkey 1 eat on day 1: -1
Invalid input. Please enter a non-negative number: 2.2
How many pounds of food did Monkey 1 eat on day 2: 2.3
How many pounds of food did Monkey 1 eat on day 3: 1.8
How many pounds of food did Monkey 1 eat on day 4: 1.5
How many pounds of food did Monkey 1 eat on day 5: 2.5

How many pounds of food did Monkey 2 eat on day 1: -2
Invalid input. Please enter a non-negative number: 1.2
How many pounds of food did Monkey 2 eat on day 2: 2.2
How many pounds of food did Monkey 2 eat on day 3: 1.9
How many pounds of food did Monkey 2 eat on day 4: 2
How many pounds of food did Monkey 2 eat on day 5: 2.1

How many pounds of food did Monkey 3 eat on day 1: -1
Invalid input. Please enter a non-negative number: 3.1
How many pounds of food did Monkey 3 eat on day 2: 2.4
How many pounds of food did Monkey 3 eat on day 3: 2.1
How many pounds of food did Monkey 3 eat on day 4: 2.6
How many pounds of food did Monkey 3 eat on day 5: 2.2

Report:
Average amount of food eaten per day by the whole family of monkeys: 2.1 pounds
The least amount of food eaten a day during the week by any one monkey: 1.2 pounds by Monkey 2
The greatest amount of food eaten a day during the week by any one monkey: 3.1 pounds by Monkey 3
