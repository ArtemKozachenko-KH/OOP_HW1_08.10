#include "MyVector.h"
#include<iostream>
using namespace std;

MyVector::MyVector()
{
    ptr = nullptr;
    size = 0;
}

MyVector::MyVector(int s)
{
    if (s <= 0)
    {
        throw -1;
    }

    size = s;
    ptr = new int[size];
}

MyVector::MyVector(const MyVector& obj)
{
    cout << "\n\t|-----Copy construct-----|\n\t";
    size = obj.size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = obj.ptr[i];
    }
}

MyVector& MyVector::operator=(const MyVector& obj)
{
    cout << "\n\t|-----Copy = -----|\n\t";
    if (this == &obj)
    {
        return *this;
    }
    if (ptr != nullptr)
    {
        delete[]ptr;
    }
    size = obj.size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = obj.ptr[i];
    }
    return *this;
}

MyVector::MyVector(MyVector&& obj)
{
    cout << "\n\t|-----Move construct-----|\n\t";
    ptr = obj.ptr;
    size = obj.size;
    obj.ptr = nullptr;
}

MyVector& MyVector::operator=(MyVector&& obj)
{
    cout << "\n\t|-----Move = -----|\n\t";
    if (this == &obj)
    {
        return *this;
    }
    if (ptr != nullptr)
    {
        delete[]ptr;
    }
    ptr = obj.ptr;
    size = obj.size;
    obj.ptr = nullptr;
    return *this;
}

int MyVector::operator[](int id)
{
    if (id < 0 || id >= size)
    {
        throw -2;
    }
    return ptr[id];
}

void MyVector::Init()
{
    for (int i = 0; i < size; i++)
    {
        ptr[i] = rand() % 100;
    }
}

void MyVector::Print()
{
    cout << "\n\t|-----Show Vector-----|\n\t";
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << "\t";
    }
    cout << endl;
}

MyVector::~MyVector()
{
    delete[]ptr;
}
