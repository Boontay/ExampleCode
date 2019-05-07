#include "string"
#include <iostream>

using namespace std;

class Student
{
public:
    Student()
    {
        this->name = "";
        this->name = "";
    }

    Student(string name, string rollNumber)
    {
        this->name = name;
        this->rollNumber = rollNumber;
    }

    string getRollNumber()
    {
        return rollNumber;
    }

    void setRollNumber(string rollNumber)
    {
        this->rollNumber = rollNumber;
    }

    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

private:
    string rollNumber;
    string name;
};

class StudentView
{
public:
    void printStudentDetails(string studentName, string studentRollNumber)
    {
        cout << "Student: " << endl;
        cout << "\tName: " << studentName << endl;
        cout << "\tRoll No: " << studentRollNumber << endl;
    }
};

class StudentController
{
public:
    StudentController(Student model, StudentView view)
    {
        this->model = model;
        this->view = view;
    }

    void setStudentName(string name)
    {
        model.setName(name);
    }

    void updateView()
    {
        view.printStudentDetails(model.getName(), model.getRollNumber());
    }

private:
    Student model;
    StudentView view;
};

int main()
{
    Student s = *new Student("Robert", "10");

    StudentView sv = *new StudentView();

    StudentController sc = *new StudentController(s, sv);

    sc.updateView();

    sc.setStudentName("John");

    sc.updateView();

    return 0;
}
