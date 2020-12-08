#pragma once

class Array
{
private:
	//int* array;
	int size;
	int* massiv;
public:
	Array(int size = 10);
	Array(int* _massiv);
	Array(const Array& copy);
	void FindShow();
	void Show();
	void Fill();
	~Array();

	

};
