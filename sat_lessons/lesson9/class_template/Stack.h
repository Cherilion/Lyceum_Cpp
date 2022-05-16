#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <bits/stdc++.h>

using namespace std;

template<typename T>

class Stack {
private:
    T *ptr;
    int len;
    int top;
public:
    Stack(int = 10);
    ~Stack();

    bool push(const T);
    bool pop();

    void print();
};

template<typename T> Stack<T>::Stack(int len) {
    if (len == 0) {
        this->len = 10;
    }
    else {
        this->len = len;
    }
    top = -1;
    ptr = new T[len];
}

template<typename T> Stack<T>::~Stack() {
    delete[] ptr;
}

template<typename T> bool Stack<T>::push(const T el) {
    if (top == len-1) {
        return false;
    }
    top++;
    ptr[top] = el;
    return true;
}

template<typename T> bool Stack<T>::pop() {
    if (top == -1) {
        return false;
    }
    ptr[top] = 0;
    top--;
    return true;
}

template<typename T> void Stack<T>::print() {
    for (int i=len-1; i > -1; i--) {
        cout << "|\t" << ptr[i] << '\n';
    }
    cout << '\n';
}


#endif // STACK_H_INCLUDED
