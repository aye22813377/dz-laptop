#include "Cpu.h"
#include<iostream>
using namespace std;

Engine::Engine()
{
	name = nullptr;
	price = 0;
}
Engine::Engine(const char* n, int pr)
{
	name = new char[strlen(n)+1];
	strcpy_s(name, strlen(n) + 1, n);
	price = pr;
}
Engine::Engine(const Engine& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	price = obj.price;
	cout << "Copy constructor\n";
}

void Engine::Print()
{
	cout << "Name: " << name << "\tPrice: " << price << endl;
}

Engine::~Engine()
{
	delete[] name;
	cout << "Destructor engine\n";
}

void Engine::SetName(char* n)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void Engine::SetPrice(int pr)
{
	price = pr;
}
