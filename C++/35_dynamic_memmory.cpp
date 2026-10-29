#include <iostream>
#include <string>
using namespace std;

class myMath
{
    int *num1 = nullptr;
    int *num2 = nullptr;

public:
    myMath(int x, int y)
    {
        num1 = new int();
        num2 = new int();
        *num1 = x;
        *num2 = y;
        cout << *num1 + *num2 << endl;
    }
    ~myMath() // bellek sızıntısını engellemek için distructor
    {
        delete num1;
        delete num2;
        cout << "Delete successfully" << endl;
    }
};

int main()
{
    //----------c++
    int *x = new int;
    *x = 7;
    int *y = x;
    cout << *y << endl;
    delete x;
    //----------------c  oop için uygun değil.
    int *a = (int *)malloc(sizeof(int));
    *a = 19;
    cout << *a << endl;
    free(x);
    /// dinamik bellek kullanımı ;

    myMath *ptr = new myMath(7, 12);
    delete ptr;

    return 0;
}
