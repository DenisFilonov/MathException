#pragma once
#include <string>
#include <iostream>
using namespace std;

//математические исключения
class MathException
{
protected:
	string op_name; //имя операции
	long val1; //значение левого операнда операции
	long val2; //значение правого операнда операции

public:
	MathException(string op_name, long v1, long v2);
	virtual string Message() = 0;
	~MathException();
};

//переполнение сверху
class OverflowException : public MathException {
public:
	OverflowException(string op_name, long v1, long v2);
	virtual string Message();
};

//переполнение снизу
class UnderflowException : public MathException {
public:
	UnderflowException(string op_name, long v1, long v2);
	virtual string Message();
};

//деление на 0
class ZdivideException : public MathException {
public:
	ZdivideException(string op_name, long v1, long v2);
	virtual string Message();
};
