#include <climits>
#include <iostream>


int main(){
    int a;

    std::cin >> a;

    while(std::cin.fail()){
        std::cout << "Error, try again please" << std::endl;
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        //ask the user for input
        std::cout << "Enter a number" << std::endl;
        std::cin >> a;

        //Newly Added
        std::cout << "Alhussein" << std::endl;
    }    
}