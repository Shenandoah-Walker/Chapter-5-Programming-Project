//Random Number Guessing Game Program

#include <iostream>
#include <random>
using namespace std;

int main()
{
  //Initialize variables and set userNumber and guesses to 0
  int randomNumber, userNumber, guesses;
  userNumber = 0;
  guesses = 1;
  
  //Generate a random number between 1 and 100
  random_device numberEngine;
  uniform_int_distribution<int> number(1, 100);
  randomNumber = number(numberEngine);

  //Create a header for the game
  cout << "Random Number Guessing Game" << endl;
  cout << endl;
  cout << endl;
  
  //Ask user to guess a number between 1 and 100
  cout << "Guess a number between 1 and 100: ";
  cin >> userNumber;

  while (userNumber != randomNumber) {
    if (userNumber > randomNumber) {
      cout << "Too high. Try again: ";
      cin >> userNumber;
      guesses++;
    }

    else if (userNumber < randomNumber) {
      cout << "Too low. Try again: ";
      cin >> userNumber;
      guesses++;
    }
  }

  cout << "Correct! The number was " << randomNumber << ". It took you " << guesses << " guesses." << endl;


  return 0;
}