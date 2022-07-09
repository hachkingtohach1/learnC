#include <stdio.h>
#include <iostream>

class Info{

public:

    Info(std::string t, std::string h){
        ten = t;
        ho = h;
    }

    void display(){
        std::cout << ten << ho << std::endl;
    }

    private: std::string ten; std::string ho;
};

int main(){
    Info *info = new Info("Nam", "Tran");
    info->display();
    return 0;
}