#include "Array.h"
#include <iostream>
using namespace std;


Array::Array(int sizem)
{
	size = sizem;
	massiv = new int[size];
}

Array::Array(int* _massiv)
{
	size = _msize(_massiv)/4;
	massiv = new int[size];
	
	for (int i = 0; i < size; ++i)
	{
		massiv[i] = _massiv[i];
	}
	/*for (int i = 0; i <= size; ++i)
	{
		for (int j = 0; size - 1; ++j)
		{
			 if (_massiv[i] >_massiv[i+1])
				 {
				 _massiv[i + 1] = _massiv[i];
				 }
		}
	}
	cout << _massiv<<_massiv[1];*/
}

Array::Array(const Array& copy)
{
	size = copy.size;
	massiv = new int[size];
	for (int i = 0; i < size; ++i)
	{
		massiv[i] = copy.massiv[i];
	}
}

void Array::FindShow()
{
	int a = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = i+1; j < size; ++j)
		{
			if (massiv[i] > massiv[j])
			{
				a = massiv[i];
				massiv[i] = massiv[j];
				massiv[j] = a;
			}
		}
	}
	cout << massiv << massiv[1,2];
}

void Array::Show()
{
	for (int i = 0; i < size; ++i)
	{
		cout << massiv[i] << " ";
	}
	cout << endl;

}

void Array::Fill()
{
	for (int i = 0; i < size; ++i)
	{
		massiv[i] = rand() % 9;
	}

}
Array::~Array()
{
	delete[] massiv;
}

