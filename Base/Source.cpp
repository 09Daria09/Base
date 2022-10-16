#include"Bus.h"
#include"Truck.h"

int main()
{
	Vehicle obj(10.23, 14.70);
	obj.leave();
	obj.GetPeopeleOnBase();
	obj.VehicleOnBase();
	obj.PetrolOnBase();
	obj.GoodsOnBase();

	Bus objB(12, 24, 4.5, 25);
	objB.leave();
	objB.GetPeopeleOnBase();
	objB.VehicleOnBase();
	objB.PetrolOnBase();
	objB.GoodsOnBase();

	Truck objT(5, 23, 10, 10);
	objT.leave();
	objT.GetPeopeleOnBase();
	objT.VehicleOnBase();
	objT.PetrolOnBase();
	objT.GoodsOnBase();
}