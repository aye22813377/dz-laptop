#include "laptop.h"
#include<iostream>
using namespace std;


Car::Car() // переопределение конструктора по умолчанию!
{
	cout << "Constructor by default\n";
	model = nullptr;
	year = 0;
}
Car::Car(const char* m, int y, const char* engName, int price, const char* gpname, int pri, const char* sdname, int prs, const char* rmname, int prr) :eng(engName, price) {} : gp(gpname, pri); : sd(sdname, prs, ) : rm(rmname, prr);
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);	
	this->gpname = new char[strlen(gpname) + 1];
	strcpy_s(this->gpname, strlen(gpname) + 1, gpname);
	this->sdname = new char[strlen(sdname) + 1];
	strcpy_s(this->sdname, strlen(sdname) + 1, sdname);
	this->rmname = new char[strlen(rmname) + 1];
	strcpy_s(this->rmname, strlen(rmname) + 1, rmname);
	this->year = y;
	cout << "Constructor by 2 params\n";
}

Car::Car(const Car& b) // Car a = b;
{
	model = new char[strlen(b.model) + 1];
	strcpy_s(model, strlen(b.model) + 1, b.model);
	year = b.year;

	eng.SetName(b.eng.GetName());
	eng.SetPrice(b.eng.GetPrice());

	cout << "Copy constructor\n";
}

Car::~Car()
{
	delete[] this->model;
	cout << "Destructor\n";
}

void Car::Print()
{
	cout << "Model: " << model << "\tYear: " << year << endl;
	eng.Print();
	sd.Print();
	gp.Print();
	sd.Print();
}
