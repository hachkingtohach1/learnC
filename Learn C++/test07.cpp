#include <stdio.h>
#include <iostream>

using namespace std;

class Info{
    public: string name; int old;

    void display(){
        cout << "Name: " << name << endl;
        cout << "Old: " << old << endl;
    }
};

class Math{
    public: double so;

    double nhanvoi5(){
        return so * 5;
    }

};

class Info2{
    private: string name = "Nam"; int old = 19;
    public:
        void display(){
            cout << name;
            cout << old;
        }
};

class Info3{
    private: string name; int old;
    public:
        Info3(){
            name = "Nam";
            old = 19;
        }
        void display(){
            cout << name;
            cout << old;
        }
};

int main(){
    Info info;
    info.name = "Nam";
    info.old = 19;
    info.display();

    Math math;
    math.so = 5;
    cout << math.nhanvoi5();

    Info2 info2;
    info2.display();

    Info3 info3;
    info3.display();
    return 0;
}