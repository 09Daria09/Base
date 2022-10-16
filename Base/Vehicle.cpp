#include "Vehicle.h"

Vehicle::Vehicle(double petrol_amount, double tank_volume){
	this->petrol_amount = petrol_amount;
	this->tank_volume = tank_volume;
}

double Vehicle::getTankVolume(){
	return tank_volume;
}

double Vehicle::getPetrolAmount(){
	return petrol_amount;
}

void Vehicle::arrive(){   
	try{
		arrival_check();
	}
	catch(runtime_error err){
		cout << err.what() << endl;
		return;
	}

	Base::people_on_base++;
	Base::vehicles_on_base++;
	
}
void Vehicle::arrival_check()
{
	if (Base::people_on_base == 100){
		throw runtime_error("Everybody has already been on the base");
	}

	if (Base::vehicles_on_base == 10){
		throw runtime_error("All cars are in place");
	}
}

bool Vehicle::leave(){
	try{
		leave_check();
	}
	catch (runtime_error err){
		cout << err.what() << endl;
		return false;
	}
	Base::people_on_base--;
	Arrival_base::people_on_base_++;

	Base::vehicles_on_base--;
	Arrival_base::vehicles_on_base_++;

	return true;
}

int Vehicle::GetPeopeleOnBase()
{
	cout << "People at the base : " << Base::people_on_base << endl;
	return Base::people_on_base;
}

int Vehicle::VehicleOnBase()
{
	cout << "Machines based on : " << Base::vehicles_on_base << endl;
	return Base::vehicles_on_base;
}

double Vehicle::PetrolOnBase()
{
	cout << "Gasoline based : " << Base::petrol_on_base << endl;
	return Base::petrol_on_base;
}

double Vehicle::GoodsOnBase()
{
	cout << "Tons of material per base : " << Base::goods_on_base << endl;
	return Base::goods_on_base;
}

bool Vehicle::leave_check(){
	if (Base::people_on_base <= 0){
		throw runtime_error("None of the people left");
	}

	if (Base::vehicles_on_base <= 0){
		throw runtime_error("There are no more cars on the base");
	}

	if (petrol_amount < tank_volume){
		try{
			refueling();
			return true;
		}
		catch (runtime_error err){
			cout << err.what() << endl;
			return false;
		}
	}
	Base::petrol_on_base -= tank_volume;

	return true;
}

void Vehicle::refueling(){

	const double fuel_difference = tank_volume - petrol_amount;

	if (Base::petrol_on_base < fuel_difference){
		throw runtime_error("Not enough fuel");
	}

	petrol_amount += fuel_difference;

	Base::petrol_on_base -= fuel_difference;
}
