#include <iostream>
using namespace std;

int main()
{
    try
    {
        int age;
        cout << "Enter your age:";
        cin >> age;
        if (age > 18)
            cout << "acces allowed\n";
        else
        {

            throw 303;
        }
    }
    catch (int err)
    {
        if (err == 303)
        {
            cout << "Access denied\n";
            cout << "Your age smaller than 18 \n";
        }
    }
}