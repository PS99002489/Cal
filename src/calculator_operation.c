#include <calculator_operation.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int sub(int operand1, int operand2)
{
    return operand1 - operand2;
}

int mult(int operand1, int operand2)
{
    return operand1 * operand2;
}

int div(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
