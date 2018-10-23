#pragma once
class Marriage
{
private:
	bool isMarried;
	unsigned long long idSpouse;
public:
	Marriage();
	bool GetIsMarried();
	unsigned long long GetIdSpouse();
	void SetIsMarried(bool isMarried);
	void SetIdSpouse(unsigned long long idSpouse);
	~Marriage();
};