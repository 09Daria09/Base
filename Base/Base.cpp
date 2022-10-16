#include "Base.h"

int Base::people_on_base = 100;
int Base::vehicles_on_base = 10;
double Base::petrol_on_base = 250;
double Base::goods_on_base = 120;

int Base::GetPeopeleOnBase()
{
	cout << "People at the base : " << people_on_base << endl;
	return people_on_base;
}

int Base::VehicleOnBase()
{
	cout << "Machines based on : " << vehicles_on_base << endl;
	return vehicles_on_base;
}

double Base::PetrolOnBase()
{
	cout << "Gasoline based : " << petrol_on_base << endl;
	return petrol_on_base;
}

double Base::GoodsOnBase()
{
	cout << "Tons of material per base : " << goods_on_base << endl;
	return goods_on_base;
}
