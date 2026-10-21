/*
aynı isimli fonksiyonu farklı parametrelerle açma işlemi
*/
#include <iostream>
using namespace std;

int sum(int, int);
double sum(double, double);

int main()
{
    cout << sum(1, 6) << "--" << sum(1.4, 6.7) << endl;

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
double sum(double a, double b)
{
    return a + b;
}