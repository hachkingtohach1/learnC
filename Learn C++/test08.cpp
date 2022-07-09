#include <stdio.h>
#include <iostream>

using namespace std;

class Array{
    public: int* array; int n;
};

class Array2{
    public: int* array; int n;
    ~Array2(){
        cout << "Hủy" << endl;
        delete[] array;
    }
};

void someFunc1(){
    Array a;
    a.n = 3;
    a.array = new int[a.n];
    delete[] a.array;
}

void someFunc2(){
    Array2 a;
    a.n = 3;
    a.array = new int[a.n];
}

int main(){
    someFunc1();
    someFunc2();
    return 0;
}