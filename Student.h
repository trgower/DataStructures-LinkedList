/*

  Tanner Gower
  9/12/2016
  Project 1: The linked list

*/

#ifndef STUDENT_H
#define STUDENT_H

class Student
{

  private:
    int id;
    std::string name;
    std::string address;
    double gpa;

  public:
    Student();
    ~Student();

    void setId(int);
    void setName(std::string);
    void setAddress(std::string);
    void setGpa(double);

    int getId();
    std::string getName();
    std::string getAddress();
    double getGpa();
    std::string toString();

};

#endif
