#pragma once
#include "Vehicle.h"
class Bus :
	public Vehicle
{
public:

	int people;
	int max_people;

	Bus(int people, int max_people, double petrol, double max_petrol);
	void arrive();// ��������� �� Vehicle;
	bool leave();// ��������� �� Vehicle;

	int getPeopleCount();// �������� ������� ���������� ����������(�������� � ��� ����� �� ������);
	int getMaxPeople();// �������� ���������� ������������ ����;

	int GetPeopeleOnBase();
	int VehicleOnBase();
	double PetrolOnBase();
	double GoodsOnBase();
};

