#pragma once

class Arrival_base{
public:

	static int people_on_base_;//���������� ����� �� ���������� ����;
	static int vehicles_on_base_;//���������� ������������ ������� �� ���������� ����;
	static double petrol_on_base_;//���������� ������� �� ������� "��������" (� ������);
	static double goods_on_base_;//���������� "�����" - ��������� ������������ ��������� (� ������);

	static int GetPeopeleOnBase();
	static int VehicleOnBase();
	static double PetrolOnBase();
	static double GoodsOnBase();
};



