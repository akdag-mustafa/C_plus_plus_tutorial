#include <iostream>
#include <string>

using namespace std;

typedef struct car
{
    string brand;
    string model;
    int year;
} araba;
void showMe(car c)
{
    cout << c.brand << endl;
    cout << c.model << endl;
    cout << c.year << endl;
}

int main()
{
    car mycar = {"BMW", "x6", 1999};
    araba mycar2{"OPEL", "ASTRA", 2005};

    cout << mycar.brand << endl;
    cout << mycar.model << endl;
    cout << mycar.year << endl;
    cout << "Pointer olarak kullanımı---------------" << endl;
    car *ptr = &mycar;
    cout << ptr->brand << endl;
    cout << ptr->model << endl;
    cout << ptr->year << endl;
    cout << "fonksiyon çağırımı olarak kullanımı---------------" << endl;
    showMe(mycar2);
    typedef int tamsayi;
    tamsayi x = 10;
    cout << x << endl;

    return 0;
}