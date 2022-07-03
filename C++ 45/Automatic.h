#pragma once

class Automatic : public Car
{
	static int s_id;
	int id;
	bool isAutomatic;
	friend ostream& operator<<(ostream& out, const Automatic&);

public:

	Automatic() : Car(), isAutomatic() {}

	Automatic(string _vendor, string _model, Engine _engine, int _speedLimit, string _fuelType, bool _isAutomatic)
		:Car(_vendor, _model, _engine, _speedLimit, _fuelType), isAutomatic(_isAutomatic), id(++s_id) {}


};

int Automatic::s_id = 0;

ostream& operator<<(ostream& out, const Automatic& a)
{
	out << boolalpha;
	out << "ID : " << a.id << endl;
	out << "Vendor : " << a.vendor << endl;
	out << "Model : " << a.model << endl;
	out << "Engine info : \n" << a.engine << endl;
	out << "Speed limit : " << a.speedLimit << endl;
	out << "Fuel type : " << a.fuelType << endl;
	out << "Is it automatic transmission ? : " << a.isAutomatic << endl << endl;

	return out;
}