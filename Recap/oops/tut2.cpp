#include <iostream>
#include <string>

using namespace std;

// 2. Constructor - special function/method called constructor.
// have same name as class
// coustructor doesn't a return type
// it automatically created and only called onces(automatically) at object creation.
// memory allocation happens when constructor is called

// There are 3 types of constructor.
// 1. Non Perameterized 
// 2. Perameterized
// [ Before CopyConstructor have to learn `this` pointer] 
// this is a special Pointer that point the current object
// 3. Copy Constructor 


// having multiple constructor with different input perameter is called Constructor Overloading --> And Constructor Overloading is an Example of Polymorphism

class Teacher // class is a blueprint,
{
private:
    double salary = 123456;

public:
    // 1. Non-Perameterized
    Teacher(){ // consturctor created same name as class name, and no return type
        cout << "Hi, I am Constructor" << endl;
    }
    // 2. Perameterized
    // Example of `this`  
    Teacher(string name, string dept, string subject){
        // [this->name]{point to object wala name } = [name]{point to perameter wala name};
        this->name = name;
        this->dept = dept;
        this->subject = subject;
    }
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        // salary = sal;

        // salaryPtr = new double;
        // *salaryPtr= salary;
    }

    string name = "Defualt name";
    string dept = "Department set here";
    string subject = "Teacher's Subject";

    void changeDept(string newDept){
        dept = newDept;
    }

    // Setter Method
    void setSalary(int setS){
        salary = setS;
    }

    // Getter Method
    double getSalary(){ // [Note] function type must same as retrun type
        return salary;
    }
    void getInfo(){
        cout << "Name of the Teacher is " << name << endl;
    cout << name << " is of " << dept << " Department" << endl;
    cout << name << " having masters in " << subject << endl;
    cout << "Offered Salary is " << getSalary() << endl;
    }

    ~Teacher(){  // [ NOTE : not Deleting the dynamicially allocated memory will lead to memory leak ]
        cout<<"\nI delete everything from static memory allocation by delfaut....\n";
        // delete salaryPtr; // Deletes Heap memory
    }

};

int main()
{
    Teacher t1("Abhay","CSE","C++"); // t1 is object of Teacher  --> object allocated in memory // constructor called automatically
    t1.getInfo();
    // t1.name = "Abhay";
    // t1.setSalary(456789); // Calling setter method/ function inside the Teacher  class
    // t1.dept = "CSE";
    // t1.subject = "Python";
    
    // string changeDept;
    // cout << "Enter a Department Name : ";
    // cin >> changeDept;
    // t1.changeDept(changeDept);

    // t1("Abhay","CSE","C++",2341);

    Teacher t2(t1);  // 3. Copy Constructor -invoke created automatically by c++
    t2.getInfo();

    cout<<"Which runs at last me or disturctor `~Teacher()`.\n\tLet's see.";
    return 0;
}