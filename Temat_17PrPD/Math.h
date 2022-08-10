#pragma once
#include "MathException.h"
#include "limits.h"

class Math
{
public:
	Math();
	~Math();

	long Add(long a, long b); //сложение (a + b)
	long Sub(long a, long b); //вычитание (a - b)
	long Mul(long a, long b); //умножение (a * b)
	long Div(long a, long b); //деление (a / b)
	long Mod(long a, long b); //остаток от деления (a % b)
};



