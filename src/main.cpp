#include <iostream>

#include "../headers/factory_calculator.hpp"

int main(int argc, char** argv)
{
    Factory_Calculator calc;

    Base* expr2 = calc.parse(argv, argc);
    std::cout << ((expr2 != nullptr) 
        ? expr2->stringify() + " = " + std::to_string(expr2->evaluate()) 
        : "ERROR! Invalid Input.") 
        << "\n";

    delete expr2;
    return 0; 
} 