#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char name[]) {
  studentId = id;
  strcpy (Stname,name);  
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID : "<<studentId<<endl;
  cout << "Student Name : "<<Stname<<endl;   
}
