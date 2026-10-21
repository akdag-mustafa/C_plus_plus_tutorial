#include <iostream>
#include <string>
using namespace std;
class ogrenci
{
public:
    string name, surname;
    int id, age;
    ogrenci(string n, string s, int i, int a)
    {
        name = n;
        surname = s;
        id = i;
        age = a;
    }
    ogrenci() {

    };

    void print(string s)
    {
        cout << s << endl;
    }
    void print(int i)
    {
        cout << i << endl;
    }
};

int main()
{
    ogrenci o1("sait", "asasa", 22222, 31);
    o1.name = "Mustafa";
    o1.surname = "Akdag";
    o1.id = 2020;
    o1.age = 26;
    o1.print(o1.name);
    o1.print(o1.surname);
    o1.print(o1.age);
    o1.print(o1.id);

    ogrenci o2("Tolgahan", "Akdağ", 2019, 27);

    o2.print(o2.name);

    return 0;
}