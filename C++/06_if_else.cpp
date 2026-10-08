#include <iostream>
using namespace std;

int main()
{
    // klasik kullanımı
    if (19 < 7)
    {
        cout << "küçük" << endl;
    }
    else if (19 > 7)
    {
        cout << "büyük" << endl;
    }
    else
    {
        cout << "eşit" << endl;
    }

    // c++ yazılımsal kullanımı
    int number;
    string result;
    cout << "Enter a number:";
    cin >> number;
    result = (number > 0) ? "your number is positive" : "your number is negative";
    cout << "\n"
         << result;

    return 0;
}