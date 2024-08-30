#include <iostream>

int main() {
    int a,b;
    std::cout << "Enter two numbers";
    std::cin>>a>>b;
    for(a;a<=b;a++){
        if(a%3==0)
            std::cout<<"Foo\n";
        else if(a%2==0)
            std::cout<<"Bar\n";
        else
            std::cout<<"Baz\n";
    }
    return 0;
}