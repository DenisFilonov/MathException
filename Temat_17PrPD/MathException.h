#pragma once
#include <string>
#include <iostream>
using namespace std;

//�������������� ����������
class MathException
{
protected:
	string op_name; //��� ��������
	long val1; //�������� ������ �������� ��������
	long val2; //�������� ������� �������� ��������

public:
	MathException(string op_name, long v1, long v2);
	virtual string Message() = 0;
	~MathException();
};

//������������ ������
class OverflowException : public MathException {
public:
	OverflowException(string op_name, long v1, long v2);
	virtual string Message();
};

//������������ �����
class UnderflowException : public MathException {
public:
	UnderflowException(string op_name, long v1, long v2);
	virtual string Message();
};

//������� �� 0
class ZdivideException : public MathException {
public:
	ZdivideException(string op_name, long v1, long v2);
	virtual string Message();
};
