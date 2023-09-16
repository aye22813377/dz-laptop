#pragma once
class RAM
{
	char* name;
	int price;
public:
	RAM();
	RAM(const char* n, int prr);
	RAM(const RAM& obj);
	void Print();
	~RAM();
	char* GetName() const
	{
		return name;
	}
	int GetPrice() const
	{
		return price;
	}
	void SetName(char* n);
	void SetPrice(int prr);
};
