/*

  Tanner Gower
  9/12/2016
  Project 1: The linked list

*/

#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include "Student.h"

class StudentList
{

  private:
    class StudentNode {
      public:
        Student student;
        StudentNode* next;
    };

    StudentNode *head;

  public:
    StudentList();
    ~StudentList();

    void AppendNode(Student);
    void PrintElements();

};

#endif
