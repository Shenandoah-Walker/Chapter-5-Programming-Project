//Student Lineup Program

#include <iostream>
#include <fstream>

using namespace std;
int main() {
 
  /*Initialize variables for the student at the front of the line and the student at the end of the line and set them to the extremes of the alphabet. Then initialize a variable for the name of the student being read from the file. Finally, initialize a variable for the number of students in the class and set it to 0.*/
  string name1 = "Z", name2 = "A";
  string name;
  int count = 0;
  
  //Open the file LineUp.txt that contains the names of the students in the class.
  ifstream inFile;
  inFile.open("LineUp.txt");

  //Check if the file opened successfully.
  if(inFile.fail()) {
    cout << "File failed to open" << endl;
    return (1);
    }

  //Determine the number of students in the class, the student at the front of the line, and the student at the end of the line.
  while(inFile >> name){
    count++;
    if(name < name1)
      name1 = name;
    if(name > name2)
      name2 = name;
  }
  
  //Close the file LineUp.txt.
  inFile.close();

  //Print the number of students in the class, the student at the front of the line, and the student at the end of the line.
  cout << "There are " << count << " students in the class." << endl;
  cout << "The student at the front of the line is " << name1 << "." << endl;
  cout << "The student at the end of the line is " << name2 << "." << endl;
  
}