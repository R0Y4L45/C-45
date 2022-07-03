#pragma once

struct Engine
{
	string company;
	float volume;

	Engine() : company(), volume() {}

	Engine(string _company, float _volume) : company(_company), volume(_volume) {}


	

};
ostream& operator<<(ostream& out, Engine e)
{
	out << "Company : " << e.company << endl;
	out << "Volume : " << e.volume << endl;
	return out;
}

class Car
{
protected:
	string vendor;
	string model;
	Engine engine;
	int speedLimit;
	string fuelType;


	Car() : vendor(), model(), engine(), speedLimit(), fuelType() {}

	Car(string _vendor, string _model, Engine _engine, int _speedLimit, string _fuelType)
	{
		vendor = _vendor;
		model = _model;
		engine = _engine;
		speedLimit = _speedLimit;
		fuelType = _fuelType;
	}
};

