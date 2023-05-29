#include<Windows.h>
#include<iostream>

using namespace std;

class carbon_calculate
{
public:

	const double TaiwanTapWater =  0.167; // every m^3
	const double PrivateCar  = 0.3015 * 30; // (gasoline) every person
	const double TaiwanEletricity = 0.6; //every kwh
	const double Bus = 1.26 * 30;// (diesel) every km
	const double Dormitory = 15.02 * 10; // every person
	const double MortorBike = 0.150 * 30; //every person 
	const double PersonAtSchool = 19.6 / 24 * 10*25/6*1.5/2/1.75;//every person
	const double GreenPlace = -(1.15 / 365 * 30);
	const double Classroom = 0.2*25*24;
	const double Peoplemin = 3.4;//only food and water

	double TapWater_mmm;
	double Bus_km;
	double Eletricity_kwh;
	double PrivateCar_person;
	double MortorBike_person;
	double Dormitory_person;
	double PersonAtSchool_person;
	double GreenPlace_mm;
	double Classroom_num;

	double Carbon_TaiwanTapWater(double TapWater_mmm);
	double Carbon_TaiwanEletricity(double Eletricity_kwh);
	double Carbon_Bus(double Bus_km);
	double Carbon_dormitory(double Dormitory_person);
	double Carbon_PrivateCar(double PrivateCar_person);
	double Carbon_Mortorbike(double MortorBike_person);
	double Carbon_PersonAtSchool(double PerAtschool_person);
	double Carbon_GreenPlace(double GreenPlace_mm);
	double Carbon_Classroom_min(double Classroom_num);
	double Carbon_People_min(double PersonAtSchool_person);
};

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
double carbon_calculate::Carbon_PersonAtSchool(double PersonAtSchool_person)
{
    return PersonAtSchool_person * PersonAtSchool;
}
double carbon_calculate::Carbon_GreenPlace(double GreenPlace_mm)
{
    return GreenPlace_mm * GreenPlace;
}
double carbon_calculate::Carbon_Classroom_min(double Classroom_num)
{
	return Classroom_num * Classroom;
}
double carbon_calculate::Carbon_People_min(double PersonAtSchool_person)
{
	return PersonAtSchool_person*Peoplemin;
}



int main()
{   
    
    double CarbonSum = 0; //碳足跡總量
    char EndControl;

    carbon_calculate Ccal; //class: carbon_calculate
    //class : clear

    cout << "carbon footpoint calculator" << endl << endl;
    cout << "welcome to the carbon foootpoint calculator"<<endl<<endl;
    system("pause");
    
    while (true) {
        CarbonSum = 0;
        system("cls");
        
        cout   << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m一個月用水量(度):";
        cin >> Ccal.TapWater_mmm;
        CarbonSum += Ccal.Carbon_TaiwanTapWater(Ccal.TapWater_mmm);
        system("cls");

        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m一個月用電量(度):";
        cin >> Ccal.Eletricity_kwh;
        CarbonSum += Ccal.Carbon_TaiwanEletricity(Ccal.Eletricity_kwh);
        system("cls");

        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m學校人數:";
        cin >> Ccal.PersonAtSchool_person;
        CarbonSum += Ccal.Carbon_PersonAtSchool(Ccal.PersonAtSchool_person);
        system("cls");

        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m家用小客車通勤人數:";
        cin >> Ccal.PrivateCar_person;
        CarbonSum += Ccal.Carbon_PrivateCar(Ccal.PrivateCar_person);
        system("cls");

        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m機車通勤人數:";
        cin >> Ccal.MortorBike_person;
        CarbonSum += Ccal.Carbon_Mortorbike(Ccal.MortorBike_person);
        system("cls");

        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m校車路線總里程數:";
        cin >> Ccal.Bus_km;
        CarbonSum += Ccal.Carbon_Bus(Ccal.Bus_km);
        system("cls");

        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m住宿人數:";
        cin >> Ccal.Dormitory_person;
        CarbonSum += Ccal.Carbon_dormitory(Ccal.Dormitory_person);
        system("cls");

        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m綠地面積(平方公尺):";
        cin >> Ccal.GreenPlace_mm;
        CarbonSum += Ccal.Carbon_GreenPlace(Ccal.GreenPlace_mm);
        system("cls");
        
        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[36m教室數量(有人):";
        cin >> Ccal.Classroom_num;
        int Carbonmin = Ccal.Carbon_Classroom_min(Ccal.Classroom_num) ;
        system("cls");
        Carbonmin += Ccal.Carbon_People_min(Ccal.PersonAtSchool) ;

        
        cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
        cout << "\x1B[32m總碳足跡是:" << CarbonSum << "Kg\x1b[0m" << endl << endl;
		cout << "\x1B[32m最佳理想碳足跡(只開燈 吃飯 喝水):" << Carbonmin << "Kg\x1b[0m" << endl << endl;
        cout << "\x1B[31m-y again\t-n close\t-d show detail:";
        cin >> EndControl;

        if (EndControl == 'y') continue;   //again         
        
        else if (EndControl == 'd') {  //show detail
            system("cls");
            cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
            cout << "\x1B[36m一個月用水量(度):" << Ccal.TapWater_mmm << "*" << Ccal.TaiwanTapWater << "=" << Ccal.Carbon_TaiwanTapWater(Ccal.TapWater_mmm) << endl;
            cout << "\x1B[36m一個月用電量(度):" << Ccal.Eletricity_kwh << "*" << Ccal.TaiwanEletricity << "=" << Ccal.Carbon_TaiwanEletricity(Ccal.Eletricity_kwh) << endl;
            cout << "\x1B[36學校總人數:" << Ccal.PersonAtSchool_person << "*" << Ccal.PersonAtSchool << "=" << Ccal.Carbon_PersonAtSchool(Ccal.PersonAtSchool_person) << endl;
            cout << "\x1B[36m家用小客車通勤人數:" << Ccal.PrivateCar_person << "*" << Ccal.PrivateCar << "=" << Ccal.Carbon_PrivateCar(Ccal.PrivateCar_person) << endl;
            cout << "\x1B[36m機車通勤人數:" << Ccal.MortorBike_person << "*" << Ccal.MortorBike << "=" << Ccal.Carbon_Mortorbike(Ccal.MortorBike_person) << endl;
            cout << "\x1B[36m校車路線總里程數:" << Ccal.Bus_km << "*" << Ccal.Bus << "=" << Ccal.Carbon_Bus(Ccal.Bus_km) << endl;
            cout << "\x1B[36m住宿人數:" << Ccal.Dormitory_person << "*" << Ccal.Dormitory << "=" << Ccal.Carbon_dormitory(Ccal.Dormitory_person) << endl;
            cout << "\x1B[36綠地吸碳量" << Ccal.GreenPlace_mm << "*" << Ccal.GreenPlace << "=" << Ccal.Carbon_GreenPlace(Ccal.GreenPlace_mm) << endl;
            cout << "\x1B[32m總碳足跡是:" << CarbonSum << "Kg" << endl;
			cout << "\x1B[32m最佳理想碳足跡(只開燈 吃飯 喝水):" << Carbonmin << "Kg\x1b[0m" << endl << endl;
            cout << "\x1B[31m-y again\t-n close:";
            cin >> EndControl;

            if (EndControl == 'y') continue;//again
            
            else {                
                system("cls");
                cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
                cout << "\x1B[31msee you next time!" << endl;
                system("pause");
                break;  //close 
            }           
        }
        else {            
            system("cls");
            cout << "\x1B[33mcarbon footpoint calculator\x1b[0m" << endl << endl;
            cout << "\x1B[31msee you next time!"<<endl;
            system("pause");
            break;  //close 
        }
    }   
    return 0;
}
