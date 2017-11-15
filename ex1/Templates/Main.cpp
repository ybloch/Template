#include <iostream>

using namespace std;

template <class T>
T getMax(T a, T b, T c) 
{
	T res = c;
	if (a > b && a > c)
	{
		res = a;
	}
	else if (b > c && b > a)
	{
		res = b;
	}
	return res;
}

void main()
{
	cout << getMax(1, 2, 3) << endl;
	cout << getMax(1.5, 2.9, 3.6) << endl;
	cout << getMax('4','2', '3') << endl;
}


