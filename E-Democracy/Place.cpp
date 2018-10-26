#include "pch.h"
#include "Place.h"

Place::Place() {}

Place::Place(string arr[]) {
	this->country = arr[0];
	this->region = arr[1];
	this->locality = arr[2];
	this->area = arr[3];
	this->street = arr[4];
	this->home = arr[5];
	this->apartment = arr[6];
	this->housing = arr[7];
}

Place::Place(string country, string region, string locality, string area, string street, string home, string apartment, string housing)
{
	this->country = country;
	this->region = region;
	this->locality = locality;
	this->area = area;
	this->street = street;
	this->home = home;
	this->apartment = apartment;
	this->housing = housing;
}

bool Place::EqualPlace(Place place) {
	if (this->country.compare(place.country) && 
		this->region.compare(place.region) && 
		this->locality.compare(place.locality) && 
		this->area.compare(place.area) &&
		this->street.compare(place.street) &&
		this->home.compare(place.home) &&
		this->apartment.compare(place.apartment) &&
		this->housing.compare(place.housing)) return false;
	return true;
}

string Place::PlaceToString() {
	return this->country + " " + 
		this->region + " " + 
		this->locality + " " + 
		this->area + " " + 
		this->street + " " + 
		this->home + " " + 
		this->apartment + " " + 
		this->housing;
}

/*Place Place::StringToPlace(string place) {
	char *str = strdup(place.c_str());
	char *pch = strtok(str, " "); 
	string arr[8];
	for (int i=0; i<8 || pch != NULL; i++)                        
	{
		arr[i] = strtok(NULL, " ");
	}
	return Place(arr);
}*/

Place::~Place()
{
}