// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    
    std::cout << "Hi There!" << std::endl;
    std::cout << "What is your name?" << std::endl;
    std::cin >> str;
    std::cout << "Nice to meet you " << str << std::endl;
    std::cout << "Have a good day!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
