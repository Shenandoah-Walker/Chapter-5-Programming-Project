//Population Program

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  //Create a header for the program
  cout << "Population Size Calculator" << endl;
  cout << endl;
  cout << endl;
  
  //Set output decimal precision to 0
  cout << fixed << setprecision(0);

  //Initialize variables
  int startingSize, averageIncrease, days, population;

  //Prompt user to input the starting size of the population.
  cout << "Enter the starting size of the population: ";
  cin >> startingSize;

  //Ensure the starting size is at least 2.
  if (startingSize < 2) {
    cout << "The starting size must be at least 2." << endl;
    return 0;
  }

  //Prompt user to input the average daily increase.
  cout << "Enter the average daily increase (as a percentage). Do not include the % symbol: ";
  cin >> averageIncrease;

  //Ensure the average daily increase is a positive number.
  if (averageIncrease < 0) {
    cout << "The average daily increase must be a positive number." << endl;
    return 0;
  }

  //Prompt user to input the number of days they will multiply.
  cout << "Enter the number of days they will multiply: ";
  cin >> days;

  //Ensure the number of days is at least 1.
  if (days < 1) {
    cout << "The number of days must be at least 1." << endl;
    return 0;
  }

  // Calculate the population size for each day and display it
  for (int i = 1; i <= days; i++) {
    population = startingSize * (1 + (averageIncrease/100)) *i;
    cout << "Day " << i << ": " << population << endl;
  }
  

  return 0;
}