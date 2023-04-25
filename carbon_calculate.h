#pragma once
#define TaiwanTapWater 0.167 // every m^3
#define PrivateCar 0.3015 *30 // (gasoline) every person
#define TaiwanEletricity 0.6 //every kwh
#define Bus 1.26 *30// (diesel) every km
#define Dormitory 15.02 *30 // every person
#define MortorBike 0.150 *30 //every person
class carbon_calculate
{
public:
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

