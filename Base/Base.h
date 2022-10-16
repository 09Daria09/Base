#pragma once
#include<iostream>
using namespace std;

class Base
{
public:

	static int people_on_base;//количество людей на территории базы;
	static int vehicles_on_base;//количество транспортных средств на территории базы;
	static double petrol_on_base;//количество бензина на местной "заправке" (в литрах);
	static double goods_on_base;//количество "груза" - различных материальных ценностей (в тоннах);

	virtual int GetPeopeleOnBase();
	virtual int VehicleOnBase();
	virtual double PetrolOnBase();
	virtual double GoodsOnBase();

};


