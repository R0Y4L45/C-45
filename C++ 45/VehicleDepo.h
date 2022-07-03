#pragma once


class VehicleDepo
{
	vector<Manual> manualCars;
	vector<Automatic> automaticCars;

public:

	VehicleDepo() : manualCars(), automaticCars() {}

	VehicleDepo(vector<Manual>& _manualCars, vector<Automatic>& _automaticCars) : manualCars(_manualCars), automaticCars(_automaticCars) {}

	friend ostream& operator<<(ostream&, const VehicleDepo&);
};

ostream& operator<<(ostream& out, const VehicleDepo& v)
{
	out << "\n\nAUTOMATIC CARS : \n";
	for (size_t i = 0; i < v.automaticCars.size(); i++)
		out << v.automaticCars[i];

	out << "\n\nMANUAL CARS : \n\n";
	for (size_t i = 0; i < v.manualCars.size(); i++)
		out << v.manualCars[i];

	return out;
}
