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
	double getTankVolume();// ������ ����� ��������� � ������;
	double getPetrolAmount();// ������ ������� ���������� ������� � ����;
	void arrive();// �������� �� ����;
	bool leave();// ������ ������ ��� � �������� ����; � ������ ������������� ������ ���������� false;

	int GetPeopeleOnBase();
	int VehicleOnBase();
	double PetrolOnBase();
	double GoodsOnBase();
};

