#include <iostream> //kendi kütüphanesindeki dosyaları eklemek için
// #include "mylibrary.h" //kendi kütüphanelerimizi çağırmak için
// #pragma once // bir kez çağırmada kullanılır.
using namespace std;
#define PI 3.14
#define P cout
#define MYFOR(i, j) for (i = 1; i < (j); i++)
#define MYSUM(i, j) ((i) + (j))
#define MYMAX(i, j) (((i) > (j)) ? (i) : (j))

int main()
{
    int x = 5, y = 15;
    P << "Hello world" << endl;

    MYFOR(x, y)
    P << "\n\t" << x;

    P << "\n-------" << MYSUM(x, y);
    P << "\n-------" << MYMAX(x, y);

#ifdef PI
    int area = 0;
    area = PI * 5 * 5;
    P << area;
#endif

#ifndef PI
    double PI = 3.1415;
#endif

    cout << __TIME__ << endl;
    cout << __LINE__ << endl;
    cout << __FILE__ << endl;
    cout << __DATE__ << endl;

    return 0;
}
