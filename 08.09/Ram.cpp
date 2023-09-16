#include "Ram.h"
#include "Cpu.h"
#include<iostream>
using namespace std;

RAM::RAM()
{
	name = nullptr;
	price = 0;
}
RAM::RAM(const char* n, int pr)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = pr;
}
RAM::RAM(const RAM& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	price = obj.price;
	cout << "Copy constructor\n";
}

void RAM::Print()
{
	cout << "Name: " << name << "\tPrice: " << price << endl;
}

RAM::~RAM()
{
	delete[] name;
	cout << "Destructor RAM\n";
}

void RAM::SetName(char* n)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void RAM::SetPrice(int pr)
{
	price = pr;
}
