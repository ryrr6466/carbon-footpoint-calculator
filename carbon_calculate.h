#pragma once

class carbon_calculate
{
public:

	const double TaiwanTapWater =  0.167; // every m^3
	const double PrivateCar  = 0.3015 * 30; // (gasoline) every person
	const double TaiwanEletricity = 0.6; //every kwh
	const double Bus = 1.26 * 30;// (diesel) every km
	const double Dormitory = 15.02 * 10; // every person
	const double MortorBike = 0.150 * 30; //every person 

	double TapWater_mmm;
	double Bus_km;
	double Eletricity_kwh;
	double PrivateCar_person;
	double MortorBike_person;
	double Dormitory_person;

	double Carbon_TaiwanTapWater(double TapWater_mmm);
	double Carbon_TaiwanEletricity(double Eletricity_kwh);
	double Carbon_Bus(double Bus_km);
	double Carbon_dormitory(double Dormitory_person);
	double Carbon_PrivateCar(double PrivateCar_person);
	double Carbon_Mortorbike(double MortorBike_person);		
};

