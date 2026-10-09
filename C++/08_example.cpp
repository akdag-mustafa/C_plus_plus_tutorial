#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
    char myCharacter;
    cout << "Enter a Character:";
    cin >> myCharacter;
    if (myCharacter >= 'A' && myCharacter <= 'Z')
    {
        cout << "The character is uppercase";
    }
    else if (myCharacter >= 'a' && myCharacter <= 'z')
    {
        cout << "The character is lowercase";
    }
    else
    {
        cout << "The character is not letter";
    }
*/
    int number, buffer;
    cout << "Enter a positive number:";
    cin >> number;
    if (number < 0)
    {
        cout << "the number is not positive" << endl;
    }
    else
    {
        buffer = sqrt(number);
        if (number == buffer * buffer)
        {
            cout << "congrass the number is integer" << endl;
            if (number % 2 == 0)
            {
                cout << "the number is even" << endl;
            }
            else
            {
                cout << "the number is odd" << endl;
            }
        }
        else
        {
            cout << "the number is not integer" << endl;
        }
    }

    return 0;
}