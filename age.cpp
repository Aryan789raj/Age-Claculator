#include<iostream>
using namespace std;
int main(){
    cout << "----------------------------------------------------------" <<endl;
    cout << "             Welcome to the age calculator" <<endl;
    cout << "----------------------------------------------------------" ;
    cout <<endl <<endl <<endl;
    
    int CurrentDate;
    int CurrentMonth;
    int CurrentYear;

    int BirthDate;
    int BirthMonth;
    int BirthYear;
    
    cout <<"Enter your date of birth in format DD MM YY : " << endl;
    cout << "DD : ";
    cin >> BirthDate;
    cout << "MM : ";
    cin >> BirthMonth;
    cout << "YY : " ;
    cin >> BirthYear;
    cout << endl;

    cout<<"Enter current date in format DD MM YY : " << endl;

    cout << "DD : ";
    cin >> CurrentDate;
    cout << "MM : ";
    cin >> CurrentMonth;
    cout << "YY : " ;
    cin >> CurrentYear;
    cout << endl;


    if (CurrentDate < BirthDate){
        CurrentMonth = CurrentMonth - 1;
        CurrentDate = CurrentDate + 30;
    }

    if (CurrentMonth < BirthMonth){
        CurrentYear = CurrentYear - 1;
        CurrentMonth = CurrentMonth + 12;
    }
    
    cout<<"Your age is : " << CurrentYear - BirthYear << " Years   " ; 
    cout << CurrentMonth - BirthMonth << " Months   " << CurrentDate-BirthDate << " Days   " << endl ;

}
