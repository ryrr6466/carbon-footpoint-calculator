#include<Windows.h>
#include<iostream>
#include"carbon_calculate.h"
#include"clear.h"

using namespace std;

int main()
{   
    SetConsoleOutputCP(65001);
    double CarbonSum = 0; //碳足跡總量
    char ifagain;

    carbon_calculate Ccal;
    clear clear;

    cout << "carbon footpoint calculator" << endl << endl;
    cout << "welcome to the carbon foootpoint calculator"<<endl;
    system("pause");
    clear.Clear();

    while (true) {
        CarbonSum = 0;
        clear.Clear();
        cout   << "carbon footpoint calculator" << endl << endl;


        cout << "一個月用水量(度):\n";
        cin >> Ccal.TapWater_mmm;
        CarbonSum += Ccal.Carbon_TaiwanTapWater(Ccal.TapWater_mmm);
        clear.Clear();

        cout << "carbon footpoint calculator" << endl << endl;
        cout << "一個月用電量(度):\n";
        cin >> Ccal.Eletricity_kwh;
        CarbonSum += Ccal.Carbon_TaiwanEletricity(Ccal.Eletricity_kwh);
        clear.Clear();

        cout << "carbon footpoint calculator" << endl << endl;
        cout << "家用小客車通勤人數:\n";
        cin >> Ccal.PrivateCar_person;
        CarbonSum += Ccal.Carbon_PrivateCar(Ccal.PrivateCar_person);
        clear.Clear();

        cout << "carbon footpoint calculator" << endl << endl;
        cout << "機車通勤人數:\n";
        cin >> Ccal.MortorBike_person;
        CarbonSum += Ccal.Carbon_Mortorbike(Ccal.MortorBike_person);
        clear.Clear();

        cout << "carbon footpoint calculator" << endl << endl;
        cout << "校車路線總里程數:\n";
        cin >> Ccal.Bus_km;
        CarbonSum += Ccal.Carbon_Bus(Ccal.Bus_km);
        clear.Clear();

        cout << "carbon footpoint calculator" << endl << endl;
        cout << "住宿人數:\n";
        cin >> Ccal.Dormitory_person;
        CarbonSum += Ccal.Carbon_dormitory(Ccal.Dormitory_person);
        clear.Clear();

        cout << "carbon footpoint calculator" << endl << endl;
        cout << "總碳足跡是:" << CarbonSum << "Kg" << endl<<endl;

        cout << "是否繼續(y/n)?";
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
