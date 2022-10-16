#pragma once
#include "Vehicle.h"
class Truck :
    public Vehicle
{
public:

	double load;
	double max_load;

	Truck(double load, double max_load, double petrol, double max_petrol);
	void arrive();// наследует от Vehicle;
	bool leave();// наследует от Vehicle;

	double getCurrentLoad();// получить текущую загруженность машины(масса груза в тоннах);
	double getMaxLoad();// знать максимальную вместительность(грузоподъемность) машины;

	int GetPeopeleOnBase();
	int VehicleOnBase();
	double PetrolOnBase();
	double GoodsOnBase();
};

