#pragma once

class Arrival_base{
public:

	static int people_on_base_;//количество людей на территории базы;
	static int vehicles_on_base_;//количество транспортных средств на территории базы;
	static double petrol_on_base_;//количество бензина на местной "заправке" (в литрах);
	static double goods_on_base_;//количество "груза" - различных материальных ценностей (в тоннах);

	static int GetPeopeleOnBase();
	static int VehicleOnBase();
	static double PetrolOnBase();
	static double GoodsOnBase();
};



