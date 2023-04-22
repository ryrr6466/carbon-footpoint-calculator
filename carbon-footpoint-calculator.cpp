#include<windows.h>
#include <iostream>
using namespace std;

#define TaiwanTapWater 0.167 // every m^3
#define PrivateCar 0.3015 *30 // (gasoline) every person
#define TaiwanEletricity 0.6 //every kwh
#define Bus 1.26 *30// (diesel) every km
#define Dormitory 15.02 *30 // every person
#define MortorBike 0.150 *30 //every perso


double CarbonSum = 0; //碳足跡總量

double TapWater_mmm;
double Bus_km;
double Eletricity_kwh;
double PrivateCar_person;
double MortorBike_person;
double Dormitory_person;
double GreenSpace_mm;

void Clear()  //清除terminal中的文字]
{
    cout << "\x1B[2J\x1B[H";
}

double Carbon_TaiwanTapWater(double TapWater_mmm) {
    return TapWater_mmm * TaiwanTapWater;
}

double Carbon_PrivateCar(double PrivateCar_person) {
    return PrivateCar_person * PrivateCar;
}

double Carbon_Mortorbike(double MortorBike_person) {
    return MortorBike_person * MortorBike;
}


double Carbon_TaiwanEletricity(double Eletricity_kwh) {
    return Eletricity_kwh * TaiwanEletricity;
}

double Carbon_Bus(double Bus_km) {
    return Bus_km * Bus;
}

double Carbon_dormitory(double Dormitory_person) {
    return Dormitory_person * Dormitory;
}



int main()
{   
    SetConsoleOutputCP(65001);
    
    cout << "一個月用水量(度):\n";
    cin >> TapWater_mmm;
    CarbonSum += Carbon_TaiwanTapWater(TapWater_mmm);
    Clear();

    cout << "一個月用電量(度):\n";
    cin >> Eletricity_kwh;
    CarbonSum += Carbon_TaiwanEletricity(Eletricity_kwh);
    Clear();

    cout << "家用小客車通勤人數:\n";
    cin >> PrivateCar_person;
    CarbonSum += Carbon_PrivateCar(PrivateCar_person);
    Clear();

    cout << "機車通勤人數:\n";
    cin >> MortorBike_person;
    CarbonSum += Carbon_Mortorbike(MortorBike_person);
    Clear();

    cout << "校車路線總里程數:\n";
    cin >> Bus_km;
    CarbonSum += Carbon_Bus(Bus_km);
    Clear();

    cout << "住宿人數:\n";
    cin >> Dormitory_person;
    CarbonSum += Carbon_dormitory(Dormitory_person);
    Clear();

   
    cout << "總碳足跡是:" << CarbonSum << "Kg" << endl;

    system("pause");
    return 0;
}
