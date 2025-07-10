//Population Bar Chart Program

#include <iostream>
#include <fstream>

using namespace std;
int main() {
 

  //Initialize variables for the file name, town name, starting year, interval, and population.
  string fileName, townName;
  int startingYear, interval, population;

  //Prompt the user to input the name of the data file.
  cout << "Enter the name of the data file that holds the population (rounded to the nearest 1,000 people) for each desired year: ";
  cin >> fileName;

  //Open the file.
  ifstream inputFile;
  inputFile.open(fileName);
  
  //Verify that the file opened correctly.
  if (inputFile.fail()) {
    cout << endl;
    cout << "Error opening file \"" << fileName << "\"" << endl;
    return (1);
  }
  //Prompt the user to input the name of the town, the starting year, and the number of years between the data points provided in the file.
  cin.ignore(); // Clear any leftover newline from previous input
  cout << "Enter the name of the town: ";
  getline(cin, townName);
  cout << "Enter the starting year: ";
  cin >> startingYear;
  cout << "Enter the number of years between the data points provided in the file: ";
  cin >> interval;

  //Read the user's file for the population growth, calculate the year, and display the year and population on a bar chart.
  cout << townName << " Population Growth" << endl;
  cout << " (each * represents 1,000 people)" << endl;
  while (inputFile >> population) {
    cout << startingYear << " ";
    for (int i = 0; i < (population / 1000); i++) {
      cout << "*";
    }
    cout << endl;
    startingYear += interval;
  }
  
  
  
}