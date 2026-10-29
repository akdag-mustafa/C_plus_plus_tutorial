#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Employee
{
public:
    string name = "Mustafa";
    int salary = 5000;
    int id = 112112333;
    Employee(string name, int salary, int id)
    {
        this->name = name;
        this->salary = salary;
        this->id = id;
        cout << "Constructor called" << endl;
    }
    Employee()
    {
        cout << "Empty Constructor called" << endl;
    }
    ~Employee()
    {
        cout << "Distructor called" << endl;
    }
};

int main()
{

    // unique pointer

    unique_ptr<int> uPtr = make_unique<int>(7);
    cout << "My value is " << *uPtr << endl;
    cout << "My value is moved 1. pointer " << *uPtr << endl;

    unique_ptr<int> uPtr2 = std::move(uPtr);

    cout << "My value is moved 2. pointer " << *uPtr2 << endl;

    // unique pointers with class
    cout << "----------------uniq pointer class kullanımı----------" << endl;
    unique_ptr<Employee> uPtrc = make_unique<Employee>("Tolgahan", 3000, 222333);
    cout << uPtrc->name << endl;
    cout << uPtrc->salary << endl;
    cout << uPtrc->id << endl;

    unique_ptr<Employee> uPtrc2 = make_unique<Employee>();
    uPtrc2->name = std::move(uPtrc->name);
    cout << uPtrc2->name << endl;

    //

    return 0;
}