#include "Truck.h"

Truck::Truck(double load, double max_load, double petrol, double max_petrol) :Vehicle(petrol, max_petrol)
{
	this->load = load;
	this->max_load = max_load;
}

void Truck::arrive()
{
	try{
		arrival_check();
	}
	catch (runtime_error err){
		cout << err.what() << endl;
		return;
	}

	Base::people_on_base++;
	Base::vehicles_on_base++;
}

bool Truck::leave()
{
	try{
		leave_check();
	}
	catch (runtime_error err){
		cout << err.what() << endl;
		return false;
	}

	if (Base::goods_on_base < max_load && Base::goods_on_base <load){
		cout << "No more cargo" << endl;
		return false;
	}
	if (Base::goods_on_base < max_load && Base::goods_on_base >= load){
		Base::goods_on_base -= load;
		Arrival_base::goods_on_base_+= load;
	}
	else{
		Base::goods_on_base -= max_load;
		Arrival_base::goods_on_base_+= max_load;
	}

	Base::vehicles_on_base--;
	Arrival_base::vehicles_on_base_++;

	return false;
}

double Truck::getCurrentLoad(){
	return load;
}

double Truck::getMaxLoad(){
	return max_load;
}

int Truck::GetPeopeleOnBase()
{
	cout << "People at the base : " << Base::people_on_base << endl;
	return Base::people_on_base;
}

int Truck::VehicleOnBase()
{
	cout << "Machines based on : " << Base::vehicles_on_base << endl;
	return Base::vehicles_on_base;
}

double Truck::PetrolOnBase()
{
	cout << "Gasoline based : " << Base::petrol_on_base << endl;
	return Base::petrol_on_base;
}

double Truck::GoodsOnBase()
{
	cout << "Tons of material per base : " << Base::goods_on_base << endl;
	return Base::goods_on_base;
}
