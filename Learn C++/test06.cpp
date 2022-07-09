#include <stdio.h>
#include <iostream>

using namespace std;

int a(){
    string name;
    string lastname;
    cin >> name >> lastname;
    cout << "Hello" << name << lastname << endl;
    return 0;
}

int b(){
    string name;
    string lastname;
    getline(cin, name);
    getline(cin, lastname);
    cout << "Name: " << name << endl;
    cout << "LastName: " << lastname << endl;
    return 0;
}

int c(){
    int a = 1;
    if(a == 1){
        cout << "OK!";
    }else{
        cout << "NO!";
    }
    return 0;
}

int d(){
    int a = 1;
    //maybe like PHP
    cout << "result: " << (a == 1 ? "Ok" : "No");
    return 0;
}

int f(){
    int a = 1;
    string b = "";
    switch (a)
    {
    case 1:
        b = "Ok";
        break;
    default:
        break;
    }
    cout << "" << b << endl;
    return 0;
}