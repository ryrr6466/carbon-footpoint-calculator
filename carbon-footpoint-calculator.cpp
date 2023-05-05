#include<Windows.h>
#include<iostream>
#include"carbon_calculate.h"
#include"clear.h"

using namespace std;

int main()
{   
    SetConsoleOutputCP(65001);
    double CarbonSum = 0; //碳足跡總量
    char EndControl;

    carbon_calculate Ccal; //class: carbon_calculate
    clear clear;  //class : clear

    cout << "\x1B[33mcarbon footpoint calculator" << endl << endl;
    cout << "\x1B[31mwelcome to the carbon foootpoint calculator"<<endl;
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
        cout << "\x1B[36m學校人數:";
        cin >> Ccal.PersonAtSchool_person;
        CarbonSum += Ccal.Carbon_PersonAtSchool(Ccal.PersonAtSchool_person);
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

        cout << "\x1B[31m-y again\t-n close\t-d show detail:";
        cin >> EndControl;

        if (EndControl == 'y') continue;   //again         
        
        else if (EndControl == 'd') {  //show detail
            clear.Clear();
            cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
            cout << "\x1B[36m一個月用水量(度):" << Ccal.TapWater_mmm << "*" << Ccal.TaiwanTapWater << "=" << Ccal.Carbon_TaiwanTapWater(Ccal.TapWater_mmm) << endl;
            cout << "\x1B[36m一個月用電量(度):" << Ccal.Eletricity_kwh << "*" << Ccal.TaiwanEletricity << "=" << Ccal.Carbon_TaiwanEletricity(Ccal.Eletricity_kwh) << endl;
            cout << "\x1B[36學校總人數:" << Ccal.PersonAtSchool_person << "*" << Ccal.PersonAtSchool << "=" << Ccal.Carbon_PersonAtSchool(Ccal.PersonAtSchool_person) << endl;
            cout << "\x1B[36m家用小客車通勤人數:" << Ccal.PrivateCar_person << "*" << Ccal.PrivateCar << "=" << Ccal.Carbon_PrivateCar(Ccal.PrivateCar_person) << endl;
            cout << "\x1B[36m機車通勤人數:" << Ccal.MortorBike_person << "*" << Ccal.MortorBike << "=" << Ccal.Carbon_Mortorbike(Ccal.MortorBike_person) << endl;
            cout << "\x1B[36m校車路線總里程數:" << Ccal.Bus_km << "*" << Ccal.Bus << "=" << Ccal.Carbon_Bus(Ccal.Bus_km) << endl;
            cout << "\x1B[36m住宿人數:" << Ccal.Dormitory_person << "*" << Ccal.Dormitory << "=" << Ccal.Carbon_dormitory(Ccal.Dormitory_person) << endl;
            cout << "\x1B[32m總碳足跡是:" << CarbonSum << "Kg" << endl;

            cout << "\x1B[31m-y again\t-n close:";
            cin >> EndControl;

            if (EndControl == 'y') continue;//again
            
            else {                
                clear.Clear();
                cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
                cout << "\x1B[31msee you next time!" << endl;
                system("pause");
                break;  //close 
            }           
        }
        else {            
            clear.Clear();
            cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
            cout << "\x1B[31msee you next time!"<<endl;
            system("pause");
            break;  //close 
        }
    }   
    return 0;
}
