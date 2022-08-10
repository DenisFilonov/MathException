#include"Math.h"
#include<new>

void main()
{
	Math a;
	//Math* b = new Math();


	//try
	//{
	//	cout << a.Add(LONG_MAX, 5);
	//}
	//catch (MathException* obj)
	//{
	//	cout << obj->Message() << endl;
	//}

	//try
	//{
	//	cout << a.Add(LONG_MIN, -3);
	//}
	//catch (MathException* obj)
	//{
	//	cout << obj->Message() << endl;
	//}

	try
	{
		cout << a.Mul(LONG_MAX, 2);
	}
	catch (MathException* obj)
	{
		cout << obj->Message() << endl;
	}

	try
	{
		cout << a.Mul(LONG_MIN, 4);
	}
	catch (MathException* obj)
	{
		cout << obj->Message() << endl;
	}

	/*int* ptr[1000];
	try
	{
		int sum = 0;
		for (int i = 0; i < 1000; i++)
		{
			ptr[i] = new int[100'000'000];
			sum+=400;
			cout << sum << " mb\n";
		}
	}
	catch (bad_alloc& x)
	{
		cerr << "Exception: " << x.what() << endl;
	}*/

}