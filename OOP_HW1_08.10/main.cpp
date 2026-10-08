#include <iostream>
#include "MyVector.h"
using namespace std;

int main()
{
    srand(time(0));
    try
    {
        MyVector obj1(5);
        obj1.Init();

        MyVector obj2(-5);

        cout << obj1[10];
    }
    catch (int exception)
    {
        if (exception == -1)
        {
            cout << "\n\t!!!!!Error. Size exception!!!!!";
        }
        else
        {
            cout << "\n\t!!!!!Error. Index exception!!!!!";
        }
    }
}