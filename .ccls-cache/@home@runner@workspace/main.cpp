//Patterns Program

#include <iostream>

using namespace std;

int main()
{
  //Create a loop that prints out Pattern A. Each line should have one more plus than the previous line. The first line should have one plus. There should be 10 lines in total.
  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "+";
    }
    cout << endl;
  }
  
  //Create a loop that prints out Pattern B. Each line should have one less plus than the previous line. The first line should have ten pluses. There should be 10 lines in total.
  for (int i = 10; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << "+";
    }
    cout << endl;
  }

  
  return 0;
}