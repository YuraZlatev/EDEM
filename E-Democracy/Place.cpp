#include "pch.h"
#include "Place.h"

Place::Place(string country = "", string region = "", string locality = "", string area = "", string street = "", string home = "", string apartment = "", string housing = "")
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

Place::~Place()
{
}