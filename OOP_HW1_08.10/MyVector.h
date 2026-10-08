#pragma once
#include<iostream>
using namespace std;

class MyVector
{
    int* ptr;
    int size;
public:
    MyVector();
    MyVector(int s);

    MyVector(const MyVector& obj);
    MyVector& operator =(const MyVector& obj);
    MyVector(MyVector&& obj);
    MyVector& operator =(MyVector&& obj);
    
    int operator[](int id);

    void Init();
    void Print();
    ~MyVector();
};