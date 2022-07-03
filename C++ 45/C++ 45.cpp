#include <iostream>
#include <vector>

using namespace std;

#include "Car.h"
#include "Automatic.h"
#include "Manual.h"
#include "VehicleDepo.h"





int main()
{
	Automatic a1("SA1", "MO1", Engine("CP1", 1.5), 134, "Oil1", true);
	Automatic a2("SA2", "MO2", Engine("CP2", 2.5), 234, "Oil2", true);
	Automatic a3("SA3", "MO3", Engine("CP3", 3.5), 334, "Oil3", true);
	Automatic a4("SA4", "MO4", Engine("CP4", 4.5), 434, "Oil4", false);

	Manual m1("CO4", "VE4", Engine("EN4", 4.5), 434, "O4", true);
	Manual m2("CO3", "VE3", Engine("EN3", 3.5), 334, "O3", false);
	Manual m3("CO2", "VE2", Engine("EN2", 2.5), 234, "O2", false);
	Manual m4("CO1", "VE1", Engine("EN1", 1.5), 134, "O1", true);

	
	vector<Automatic> aes;
	aes.push_back(a1);
	aes.push_back(a2);
	aes.push_back(a3);
	aes.push_back(a4);

	vector<Manual> mes;

	mes.push_back(m1);
	mes.push_back(m2);
	mes.push_back(m3);
	mes.push_back(m4);

	
	VehicleDepo a(mes, aes);
	cout << a;
}
