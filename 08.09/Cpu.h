#pragma once
class Engine
{
	char* name;
	int price;
public:
	Engine();
	Engine(const char* n, int pr);
	Engine(const Engine& obj);
	void Print();
	~Engine();
	char* GetName() const
	{
		return name;
	}
	int GetPrice() const
	{
		return price; 
	}
	void SetName(char* n);
	void SetPrice(int pr);
};

