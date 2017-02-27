/*

  Tanner Gower
  9/12/2016
  Project 1: The linked list

*/

#include <iostream>
#include "StudentList.h"

using namespace std;

const int kNumStudents = 10;

int main ()
{
  Student students[kNumStudents];
  StudentList studentList;
  cout << "----------UNSORTED ARRAY ELEMENTS----------" << endl;
  for (int i = 0; i < kNumStudents; i++) {
    cout << students[i].toString() << endl;

    // append student to end of linked list
    // appendNode sets next to NULL, so we don't need it here
    studentList.AppendNode(students[i]);
  }

  cout << "----------UNSORTED LINKED LIST ELEMENTS----------" << endl;
  studentList.PrintElements();

  return 0;
}
