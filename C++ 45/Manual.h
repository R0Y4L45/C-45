#pragma once


class Manual : public Car
{
	static int s_id;
	int id;
	bool isManual;

	friend ostream& operator<<(ostream& out, const Manual&);
public:

	Manual() : Car(), isManual(), id() {}

	Manual(string _vendor, string _model, Engine _engine, int _speedLimit, string _fuelType, bool _isAutomatic)
		:Car(_vendor, _model, _engine, _speedLimit, _fuelType), isManual(_isAutomatic), id(++s_id) {}
};

int Manual::s_id = 0;

ostream& operator<<(ostream& out, const Manual& c)
{
	out << boolalpha;
	out << "ID : " << c.id << endl;
	out << "Vendor : " << c.vendor << endl;
	out << "Model : " << c.model << endl;
	out << "Engine info : \n" << c.engine << endl;
	out << "Speed limit : " << c.speedLimit << endl;
	out << "Fuel type : " << c.fuelType << endl;
	out << "Is it automatic transmission ? : " << c.isManual << endl << endl;

	return out;
}