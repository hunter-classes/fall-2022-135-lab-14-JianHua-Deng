#include "MyVector.h"

template <class T>
MyVector<T>::MyVector(){
    maxCap = 10;
    s = 0;
    arr = new T[maxCap];
}

template <class T>
MyVector<T>::MyVector(int n){
    maxCap = n;
    s = 0;
    arr = new T[maxCap];
}

template <class T>
int MyVector<T>::size(){
    return this->s;
}

template <class T>
int MyVector<T>::capacity(){
    return this->maxCap;
}

template <class T>
bool MyVector<T>::empty(){
    if(s == 0){
        return true;
    }else{
        return false;
    }//end else condition
}

template <class T>
void MyVector<T>::push_back(T item){
    if(s < maxCap){
        arr[s] = item;
        s += 1;
    }else{
        maxCap += 1;
        T *newArr = new T[maxCap];
        for(int i = 0; i < s; i++){
            newArr[i] = arr[i];
        }
        newArr[s] = item;
        s += 1;
        delete[] arr;
        arr = newArr;
    }

}

template <class T>
void MyVector<T>::pop_back(){
    T *newArr = new T[maxCap];
    for(int i = 0; i < s - 1; i++){
        newArr[i] = arr[i];
    }
    s -= 1;
    delete[] arr;
    arr = newArr;
}

template <class T>
void MyVector<T>::clear(){
    T *newArr = new T[maxCap];
    delete[] arr;
    arr = newArr;
    s = 0;
}

template <class T>
std::string MyVector<T>::print(){
    std::string result;
    for(int i = 0; i < s; i++){
        result += arr[i] + ", ";
    }//end for loop
    return result;
}

template <class T>
T &MyVector<T>::operator[](int index){
    return arr[index];
}