#include "Cpu.h"
#include<iostream>
#include "Gpu.h"
using namespace std;

Gpu::Gpu()
{
	name = nullptr;
	price = 0;
}
Gpu::Gpu(const char* n, int pri)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = pri;
}
Gpu::Gpu(const Gpu& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	price = obj.price;
	cout << "Copy constructor\n";
}

void Gpu::Print()
{
	cout << "Name: " << name << "\tPrice: " << price << endl;
}

Gpu::Gpu()
{
	delete[] name;
	cout << "Destructor engine\n";
}

void Gpu::SetName(char* n)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void Gpu::SetPrice(int pr)
{
	price = pr;
}

