#include <iostream>
#include <string>
using namespace std;
class Shape // abstract class
{
public:
    virtual void print()
    {
        cout << "i'm a shape" << endl;
    }
};
class triangle : public Shape
{
public:
    void print()
    {
        cout << "i'm a triangle" << endl;
    }
};
class rectangle : public Shape
{
public:
    void print()
    {
        cout << "i'm a rectangle" << endl;
    }
};
class circle : public Shape
{
public:
    void print()
    {
        cout << "i'm a circle" << endl;
    }
};

int main()
{
    Shape *s1 = new triangle();
    Shape *s2 = new rectangle();
    s1->print();
    s2->print();
    return 0;
}
