/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	//constant variables for monkeys and days
	const int NUM_MONKEY = 3;
	const int NUM_DAYS = 5;

	double totalFood = 0;
	//2 dimensional array for each monkey and each day
	double poundsFood [NUM_MONKEY][NUM_DAYS];

	//prompts user to enter amount of pounds eaten by each monkey each day of the week
	for (int i = 0 ; i < NUM_MONKEY ; i++)
	{
		for ( int j = 0 ; j < NUM_DAYS ; j++)
		{
			cout <<"How many pounds of food did Monkey "<<(i + 1) <<" eat on day "<<(j+1)<<" :"<<endl;
			cin >> poundsFood[i][j];

			while (poundsFood[i][j] < 0)
			{
				cout << "Invalid input. Please enter a non-negative number: "<<endl;
				cin >> poundsFood[i][j];
			}
			totalFood = totalFood + poundsFood[i][j];

		}
	}

//calculates lowest and highest ate by any Monkey
//variables to store the highest/lowest amount eaten and highest/lowest monkey that ate that amount
	double highestAte = 0;
	double lowestAte = 1000;
	int highestMonkey = 0;
	int lowestMonkey = 0;

	for (int i = 0; i < NUM_MONKEY ; i++)
	{
		for ( int j = 0 ; j < NUM_DAYS ; j++)
		{
			if ( poundsFood[i][j] > highestAte)
			{
				highestAte = poundsFood[i][j];
				highestMonkey = (i + 1);
			}

			if ( poundsFood[i][j] < lowestAte)
			{
				lowestAte = poundsFood[i][j];
				lowestMonkey = (i + 1);
			}
		}
	}


//calculates average
	double totalAvg;
	totalAvg = totalFood / 15;

//outputs result 
	cout <<"Report:"<<endl;
	cout <<"Average amount of food eaten per day by the whole family of monkeys: "<<totalAvg<<" pounds"<<endl;
	cout<<"The least amount of food eaten a day during the week by any one monkey: "<<lowestAte<<" pounds by monkey "<<lowestMonkey<<endl;
	cout <<"The greatest amount of food eaten a day during the week by any one monkey: "<< highestAte<<" pounds by monkey "<<highestMonkey<<endl;

	return 0;
}