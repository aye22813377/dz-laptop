#pragma once
class Gpu
{
	char* name;
	int price;
public:
	Gpu();
	Gpu(const char* n, int pri);
	Gpu(const Gpu& obj);
	void Print();
	~Gpu();
	char* GetName() const
	{
		return name;
	}
	int GetPrice() const
	{
		return price;
	}
	void SetName(char* n);
	void SetPrice(int pri);
};

