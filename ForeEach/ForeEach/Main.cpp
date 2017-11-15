#include <iostream>

using namespace std;

enum Action
{
	Print,
	Sum
};


template <class T>
void forEach(T* a, size_t size, Action action)
{
	T sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		switch (action)
		{
			case Print:
				{
					cout << a[i] << " ";
					break;
				}
			case Sum:
				{
					sum += a[i];
					cout << sum << " ";
					break;
				}
			default:
				break;
		}
	}

}

void main()
{
	int intArray[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	double doubleArray[10] = { 0.0, 15.6, 2.8, 3.546, 4.645, 5, 6, 7, 8 };

	forEach(intArray, 10, Print);
	cout << std::endl;
	forEach(doubleArray, 10, Sum);
	cout << std::endl;


}