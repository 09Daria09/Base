#pragma once
#include<iostream>
using namespace std;

class Base
{
public:

	static int people_on_base;//���������� ����� �� ���������� ����;
	static int vehicles_on_base;//���������� ������������ ������� �� ���������� ����;
	static double petrol_on_base;//���������� ������� �� ������� "��������" (� ������);
	static double goods_on_base;//���������� "�����" - ��������� ������������ ��������� (� ������);

	virtual int GetPeopeleOnBase();
	virtual int VehicleOnBase();
	virtual double PetrolOnBase();
	virtual double GoodsOnBase();

};


