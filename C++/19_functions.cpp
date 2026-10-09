#include <iostream>
using namespace std;

void print()
{
    cout << "function called" << endl;
}
void print_2(string s = "default yazi")
{
    cout << s << endl;
}
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    print();
    print_2();
    print_2("buraya yazdim");
    cout << sum(3, 6) << endl;
    return 0;
}