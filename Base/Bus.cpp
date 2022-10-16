#include "Bus.h"

Bus::Bus(int people, int max_people, double petrol, double max_petrol) :Vehicle(petrol, max_petrol){
	this->max_people = max_people;
	this->people = people;
	if (people > max_people){
		cout << "You entered the wrong number of passengers" << endl;
		return;
	}

}

void Bus::arrive(){
	try{
		arrival_check();
	}
	catch (runtime_error err){
		cout << err.what() << endl;
		return;
	}

	if (Base::people_on_base - people > Base::people_on_base){
		cout<< "More people came than just at the base" << endl;
		return;
	}

	Base::people_on_base += people;
	Base::vehicles_on_base++;
}

bool Bus::leave(){
	try{
		leave_check();
	}
	catch (runtime_error err){
		cout << err.what() << endl;
		return false;
	}

	if (Base::people_on_base - people < 0){
		Base::people_on_base -= Base::people_on_base;
		Arrival_base::people_on_base_+=Base::people_on_base;
	}
	else{
		Base::people_on_base -= people;
		Arrival_base::people_on_base_+= people;
	}

	Base::vehicles_on_base--;
	Arrival_base::vehicles_on_base_++;

	return true;
}

int Bus::getPeopleCount(){
	return people;
}

int Bus::getMaxPeople(){
	return max_people;
}

int Bus::GetPeopeleOnBase()
{
	cout << "People at the base : " << Base::people_on_base << endl;
	return Base::people_on_base;
}

int Bus::VehicleOnBase()
{
	cout << "Machines based on : " << Base::vehicles_on_base << endl;
	return Base::vehicles_on_base;
}

double Bus::PetrolOnBase()
{
	cout << "Gasoline based : " << Base::petrol_on_base << endl;
	return Base::petrol_on_base;
}

double Bus::GoodsOnBase()
{
	cout << "Tons of material per base : " << Base::goods_on_base << endl;
	return Base::goods_on_base;
}
