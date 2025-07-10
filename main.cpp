//Student Lineup Program

#include <iostream>
#include <fstream>

using namespace std;
int main() {
 
  //Initialize variables
  
  //Open the file LineUp.txt that contains the names of the students in the class.
  ifstream inFile;
  inFile.open("LineUp.txt");

  //Check if the file opened successfully.
  if(inFile.fail()) {
    cout << "File failed to open" << endl;
    return (1);
    }

  
  
}