#pragma once
#include <iostream>

template <class T>
class MyVector{
    public:
        MyVector();
        MyVector(int);
        int size();
        int capacity();
        bool empty();
        void push_back(T);
        void pop_back(int);
        void pop_back();
        void clear();
        std::string print();
        T &operator[](int i);
 

    private:
        int s;
        int maxCap;
        T *arr;

};







#include "MyVector.cxx"