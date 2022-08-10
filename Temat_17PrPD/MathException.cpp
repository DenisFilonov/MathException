#include "MathException.h"

MathException::MathException(string op_name, long v1, long v2)
{
    this->op_name = op_name;
    this->val1 = v1;
    this->val2 = v2;
}

MathException::~MathException()
{
}

OverflowException::OverflowException(string op_name, long v1, long v2) : MathException(op_name,  v1,  v2)
{
}

string OverflowException::Message()
{
    return "Overflow Exception: " + to_string(val1) + op_name + to_string(val2);
}

UnderflowException::UnderflowException(string op_name, long v1, long v2) : MathException(op_name, v1, v2)
{
}

string UnderflowException::Message()
{
    return "Underflow Exception: " + to_string(val1) + op_name + to_string(val2);
}

ZdivideException::ZdivideException(string op_name, long v1, long v2) : MathException(op_name, v1, v2)
{
}

string ZdivideException::Message()
{
    return "Z divide Exception: " + to_string(val1) + op_name + to_string(val2);
}
