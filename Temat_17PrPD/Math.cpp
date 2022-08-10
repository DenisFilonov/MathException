#include "Math.h"

Math::Math()
{
}

Math::~Math()
{
}

long Math::Add(long a, long b)
{
    if (a > 0 && b > 0)
    {
        if (LONG_MAX - a < b)
        {
            throw new OverflowException("+", a, b);
        }
    }
    else if (a < 0 && b < 0)
    {
        if (LONG_MIN + b > a)
        {
            throw new UnderflowException("", a, b);
        }
    }
    return a + b;
}

long Math::Sub(long a, long b)
{
    if (a > 0 && b > 0)
    {
        if (LONG_MAX - a < b)
        {
            throw new OverflowException("+", a, b);
        }
    }
    else if (a < 0 && b < 0)
    {
        if (LONG_MIN - b > a)
        {
            throw new UnderflowException("", a, b);
        }
    }
    return a - b;
}

long Math::Mul(long a, long b)
{
    if ((a < 0 && b < 0) || (LLONG_MAX / a > b))
    {
        throw new OverflowException("*", a, b);
    }
    else if ((a > 0 && b > 0) || (LLONG_MAX / a < b))
    {
        throw new OverflowException("*", a, b);
    }
    else if ((a < 0 && b > 0) || (LLONG_MIN / a < b))
    {
        throw new UnderflowException("*", a, b);
    }
    else if ((a > 0 && b < 0) || (LLONG_MIN / a > b))
    {
        throw new UnderflowException("*", a, b);
    }
    /*if (a > 0 && b > 0)
    {
        if (LONG_MAX / a < b)
        {
            throw new OverflowException("*", a, b);
        }
    }
    else if (a < 0 && b < 0)
    {
        if (LONG_MIN / b > a)
        {
            throw new UnderflowException("*", a, b);
        }
    }

    else if (a < 0 && b > 0)
    {
        if (LONG_MAX / a < b)
        {
            throw new UnderflowException("*", a, b);
        }
    }

    else if (a > 0 && b < 0)
    {
        if (LONG_MIN / b > a)
        {
            throw new UnderflowException("*", a, b);
        }
    }*/
    /*if ((double)a * b > LONG_MAX)
    {
        throw new OverflowException("*", a, b);
    }
    else if ((double)a * b < LONG_MIN)
    {
        throw new UnderflowException("*", a, b);
    }*/
    return a * b;
}

/*
Overflow: 2147483647
Underflow: -2147483648
*/

long Math::Div(long a, long b)
{
    if (b == 0)
    {
        throw new ZdivideException("/", a, b);
    }
    return a / b;
}

long Math::Mod(long a, long b)
{
    if (b == 0)
    {
        throw new ZdivideException("%", a, b);
    }
    return a % b;
}
