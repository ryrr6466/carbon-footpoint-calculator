#include<Windows.h>
#include<iostream>
#include"carbon_calculate.h"
#include"clear.h"
#include<string>

using namespace std;



int main()
{   
    SetConsoleOutputCP(65001);
    double CarbonSum = 0; //碳足跡總量
    char ifagain;

    carbon_calculate Ccal;
    clear clear;

    cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
    cout << "\x1B[31mwelcome to the carbon foootpoint calculator\x1b[0m"<<endl;
    system("pause");
    clear.Clear();

    while (true) {
        CarbonSum = 0;
        clear.Clear();
        cout   << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;


        cout << "\x1B[36m一個月用水量(度):";
        cin >> Ccal.TapWater_mmm;
        CarbonSum += Ccal.Carbon_TaiwanTapWater(Ccal.TapWater_mmm);
        clear.Clear();

        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m一個月用電量(度):";
        cin >> Ccal.Eletricity_kwh;
        CarbonSum += Ccal.Carbon_TaiwanEletricity(Ccal.Eletricity_kwh);
        clear.Clear();

        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m家用小客車通勤人數:";
        cin >> Ccal.PrivateCar_person;
        CarbonSum += Ccal.Carbon_PrivateCar(Ccal.PrivateCar_person);
        clear.Clear();

        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m機車通勤人數:";
        cin >> Ccal.MortorBike_person;
        CarbonSum += Ccal.Carbon_Mortorbike(Ccal.MortorBike_person);
        clear.Clear();

        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m校車路線總里程數:";
        cin >> Ccal.Bus_km;
        CarbonSum += Ccal.Carbon_Bus(Ccal.Bus_km);
        clear.Clear();

        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m住宿人數:";
        cin >> Ccal.Dormitory_person;
        CarbonSum += Ccal.Carbon_dormitory(Ccal.Dormitory_person);
        clear.Clear();

        
        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[32m總碳足跡是:" << CarbonSum << "Kg\x1b[0m" << endl << endl;

        cout << "\x1B[31m是否繼續(y/n)?\x1b[0m";
        cin >> ifagain;

        if (ifagain == 'y') {
            continue;
        }
        else {
            break;
        }
    }
       
    return 0;
}
