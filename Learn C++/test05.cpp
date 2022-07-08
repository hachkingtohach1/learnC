#include <stdio.h>
#include <iostream>

using namespace std;

//Hàm đệ quy

int a(int n){
    if(n == 1) return 1;
    return n * a(n - 1);
}

int b(){
    printf("%d\n", a(10));
    return 0;
}

//C++

int main(){
    cout << "Hi\n";
    cout << "2468 + 1234 = " << 2468 + 1234 << endl;

    bool a = 1 < 2;
    bool b = 3 > 1;
    long long c = 123123124;
    unsigned d = 5;
    cout << "\n" << a << endl;
    cout << "\n" << b << endl;
    cout << "\n" << c << endl;
    cout << d;
    return 0;
}