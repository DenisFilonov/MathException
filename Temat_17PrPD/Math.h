#pragma once
#include "MathException.h"
#include "limits.h"

class Math
{
public:
	Math();
	~Math();

	long Add(long a, long b); //�������� (a + b)
	long Sub(long a, long b); //��������� (a - b)
	long Mul(long a, long b); //��������� (a * b)
	long Div(long a, long b); //������� (a / b)
	long Mod(long a, long b); //������� �� ������� (a % b)
};



