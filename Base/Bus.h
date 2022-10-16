#pragma once
#include "Vehicle.h"
class Bus :
	public Vehicle
{
public:

	int people;
	int max_people;

	Bus(int people, int max_people, double petrol, double max_petrol);
	void arrive();// наследует от Vehicle;
	bool leave();// наследует от Vehicle;

	int getPeopleCount();// получить текущее количество пассажиров(водитель в это число не входит);
	int getMaxPeople();// получить количество пассажирских мест;

	int GetPeopeleOnBase();
	int VehicleOnBase();
	double PetrolOnBase();
	double GoodsOnBase();
};

