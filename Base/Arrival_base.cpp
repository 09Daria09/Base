#include "Arrival_base.h"

int Arrival_base::people_on_base_ = 0;
int Arrival_base::vehicles_on_base_ = 0;
double Arrival_base::petrol_on_base_ = 0;
double Arrival_base::goods_on_base_ = 0;

int Arrival_base::GetPeopeleOnBase()
{
	return people_on_base_;
}

int Arrival_base::SetPeopeleOnBasePlus(int a)
{
	return people_on_base_ + a;
}

int Arrival_base::SetPeopleOnBaseMinus(int a)
{
	return people_on_base_ - a;
}
int Arrival_base::VehicleOnBase()
{
	return vehicles_on_base_;
}
int Arrival_base::VehicleOnBasePlus(int a)
{
	return vehicles_on_base_ + a;
}
int Arrival_base::VehicleOnBaseMinus(int a)
{
	return vehicles_on_base_ - a;
}
double Arrival_base::PetrolOnBase()
{
	return petrol_on_base_;
}
double Arrival_base::PetrolOnBasePlus(double a)
{
	return petrol_on_base_ + a;
}
double Arrival_base::PetrolOnBaseMinus(double a)
{
	return petrol_on_base_ - a;
}
double Arrival_base::GoodsOnBase()
{
	return goods_on_base_;
}
double Arrival_base::GoodsOnBasePlus(double a)
{
	return goods_on_base_ + a;
}
double Arrival_base::GoodsOnBaseMinus(double a)
{
	return goods_on_base_ - a;
}
