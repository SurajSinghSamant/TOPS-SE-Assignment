// Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.

#include<iostream>
using namespace std;

class Data {
    int Date;
    string Month;
    int Year;
    
    public :
    
    Data() {
        cout << "Enter the date : ";
        cin >> Date;
        
        if(Date > 31) {
            cout << "Invalid Date";
        } else {
            cout << "Enter month : ";
            cin >> Month;
        }
        if( Month == ("feb") && (Date > 28)) {
            cout << "Date is invalid";
        } else {
            cout << "Enter Year : ";
            cin >> Year;
            cout << Date << "/" << Month << "/" << Year << endl;
        }
    }
};
        
int main(){
        Data obj;
    
}

