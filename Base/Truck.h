#pragma once
#include "Vehicle.h"
class Truck :
    public Vehicle
{
public:

	double load;
	double max_load;

	Truck(double load, double max_load, double petrol, double max_petrol);
	void arrive();// ��������� �� Vehicle;
	bool leave();// ��������� �� Vehicle;

	double getCurrentLoad();// �������� ������� ������������� ������(����� ����� � ������);
	double getMaxLoad();// ����� ������������ ���������������(����������������) ������;

	int GetPeopeleOnBase();
	int VehicleOnBase();
	double PetrolOnBase();
	double GoodsOnBase();
};

