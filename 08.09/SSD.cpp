#include "SSD.h"
#include "Cpu.h"
#include<iostream>
using namespace std;

SSD::SSD()
{
	name = nullptr;
	price = 0;
}
SSD::SSD(const char* n, int prs)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = prs;
}
SSD::SSD(const SSD& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	price = obj.price;
	cout << "Copy constructor\n";
}

void SSD::Print()
{
	cout << "Name: " << name << "\tPrice: " << price << endl;
}

SSD::~SSD()
{
	delete[] name;
	cout << "Destructor SSD\n";
}

void SSD::SetName(char* n)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void SSD::SetPrice(int prs)
{
	price = prs;
}
