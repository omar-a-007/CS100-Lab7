#include <iostream>

#include "../headers/factory_calculator.hpp"

/* Note:
 *  Based on the given specs, the parser takes several liberties.
 *  Particularly: Precedence doesn't matter, input is given in infix notation, and there are no parenthesis.
 *  Otherwise, a binary expression tree would be a better implementation.
 * 
 * Example input 3 + 5 * 2 --> ((3 + 5) * 2) = 16
 */
Base* Factory_Calculator::parse(char** input, int qty)
{
    std::queue<Base*> operands;
    std::queue<std::string> operators;

    for (int i = 1; i < qty; ++i)
    {
        const std::string expr(input[i]);
        if ( isDouble(expr) ) { operands.push(create(std::stod(expr))); continue;}       /* stod: string to double */                
        operators.push(expr); // Its not a operand, so push the operator

        if (operands.size() < 2)  continue;

        Base *x = getPop(operands), *y = getPop(operands);
        Base *r = create(getPop(operators), x, y);
        
        if (r == nullptr) return nullptr;
        else operands.push(r);
        //operators.pop();
    }
    if (operators.size() != 0) {
        Base *x = getPop(operands), *y = getPop(operands);
        Base *r = create(getPop(operators), x, y);
        if (r == nullptr) return nullptr;
        else operands.push(r);
    }        

    if (operands.size() == 1 && operators.size() == 0)
        return getPop(operands);
    return nullptr;
}