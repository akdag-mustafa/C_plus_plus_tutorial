#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int myArray[10];
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        myArray[i] = rand() % 100 + 1;
    }
    void shortArray(int myArray[], int length);
    void reverseShortArray(int myArray[], int length);
    void printArray(int myArray[], int length);

    printArray(myArray, 10);
    shortArray(myArray, 10);
    reverseShortArray(myArray, 10);
    return 0;
}

void printArray(int myArray[], int length)
{
    cout << "Orginal random filled array:";
    for (int i = 0; i < length; i++)
    {
        cout << myArray[i] << " - ";
    }
    cout << "\b\b \b" << endl;
}
void shortArray(int myArray[], int length)
{
    int buff;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (myArray[j] < myArray[i])
            {
                buff = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = buff;
            }
        }
    }
    printArray(myArray, 10);
}
void reverseShortArray(int myArray[], int length)
{
    int buff;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (myArray[j] > myArray[i])
            {
                buff = myArray[i];
                myArray[i] = myArray[j];
                myArray[j] = buff;
            }
        }
    }
    printArray(myArray, 10);
}