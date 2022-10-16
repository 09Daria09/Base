#pragma once
#include"Base.h"
#include"Arrival_base.h"
class Vehicle 
{
protected:
	double petrol_amount;
	double tank_volume;
	bool leave_check();
	void arrival_check();
	void refueling();
public:
	Vehicle(double petrol_amount, double tank_volume);
	double getTankVolume();// узнать объем бензобака в литрах;
	double getPetrolAmount();// узнать текущее количество топлива в баке;
	void arrive();// приехать на базу;
	bool leave();// залить полный бак и покинуть базу; в случае невозможности уехать возвращает false;

	int GetPeopeleOnBase();
	int VehicleOnBase();
	double PetrolOnBase();
	double GoodsOnBase();
};

