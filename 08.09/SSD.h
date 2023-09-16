#pragma once
class SSD
{
	char* name;
	int price;
public:
	SSD();
	SSD(const char* n, int prs);
	SSD(const SSD& obj);
	void Print();
	~SSD();
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

