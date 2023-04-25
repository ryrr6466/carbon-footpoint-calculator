#include "carbon_calculate.h"

double carbon_calculate::Carbon_TaiwanTapWater(double TapWater_mmm)
{
    return TapWater_mmm * TaiwanTapWater;
}

double carbon_calculate::Carbon_TaiwanEletricity(double Eletricity_kwh)
{
    return Eletricity_kwh * TaiwanEletricity;
}

double carbon_calculate::Carbon_Bus(double Bus_km)
{
    return Bus_km * Bus;
}

double carbon_calculate::Carbon_dormitory(double Dormitory_person)
{
    return Dormitory_person * Dormitory;
}

double carbon_calculate::Carbon_PrivateCar(double PrivateCar_person)
{
    return PrivateCar_person * PrivateCar;
}

double carbon_calculate::Carbon_Mortorbike(double MortorBike_person)
{
    return MortorBike_person * MortorBike;
}
