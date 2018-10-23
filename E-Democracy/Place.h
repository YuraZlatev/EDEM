#pragma once
#include <string>;

using namespace std;

class Place
{
private:
	string country;
	string region;
	string locality; //city or village
	string area; // raion of city or region
	string street;
	string home;
	string apartment;
	string housing;

public:
	Place();
	Place(string country, string region, string locality, string area, string street, string home, string apartment, string housing);
	bool EqualPlace(Place place);
	~Place();
};