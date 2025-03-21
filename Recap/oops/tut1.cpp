#include <iostream>
#include <string>

using namespace std;

// Objects and Classes 
// Getter and Setter
// Public Private Protected

// 1. Encapsulation - wrapping up of data and member function(method/function) in a single unit of class.
// line no. 22 - 24 and 28, 33, 38

// encapsulation helps in data hiding by using   private:  protected:  access modifiers


class Teacher
{
private:
    double salary = 123456;

public:
    string name = "Defualt name";
    string dept = "Department set here";
    string subject = "Teacher's Subject";

    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // Setter Method 
    void setSalary( int setS){
        salary = setS;
    }

    // Getter Method
    double getSalary(){   // [Note] function type must same as retrun type
        return salary;
    }
};

class Student
{
};

int main()
{
    Teacher t1;
    t1.name = "Abhay";
    t1.setSalary(456789); // Calling setter method/ function inside the Teacher  class
    t1.dept = "CSE";
    t1.subject = "Python";

    t1.changeDept("Civil");

    cout << "Name of the Teacher is " << t1.name << endl;
    cout << t1.name << " is of " << t1.dept << " Department" << endl;
    cout << t1.name << " having masters in " << t1.subject << endl;
    cout << "Offered Salary is " << t1.getSalary() << endl;
    return 0;
}