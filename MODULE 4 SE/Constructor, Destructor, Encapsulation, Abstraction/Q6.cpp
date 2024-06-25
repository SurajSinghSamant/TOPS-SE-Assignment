// Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance. Using of constructor

#include<iostream>
using namespace std;

class Employee{
    string Name;
    int Id;
    int Salary;
    int Choice;
    
    public:
    
    Employee() {
        cout << "Enter the employee name : ";
        cin >> Name;
        
        cout << "Enter id : ";
        cin >> Id;
        
        cout << "\n---------Employee Performance----------\n";
        cout << "\n1. Very good \n2. Good \n3. Average \n4. Bad \n";
        
        cout << "Enter the employee's performance : ";
        cin >> Choice;
        
        switch(Choice) {
                
            case 1:
                
                cout << "\nVery Good Performance\n";
                Salary = 60000;
                cout << "Salary is " << Salary << endl;
                break;
                
            case 2:
                
                cout << "\nGood Performance\n";
                Salary = 45000;
                cout << "Salary is " << Salary << endl;
                break;
                
            case 3:
                
                cout << "\nAverage Performance\n";
                Salary = 30000;
                cout << "Salary Was Rupees " << Salary << endl;
                break;
                
            case 4:
                
                cout << "\nBad Performance\n";
                Salary = 10000;
                cout << "Salary Was Rupees " << Salary << endl;
                break;
                
            default:
                cout << "\nEnter Valid Option";
        }
    }
};


int main(){
    Employee obj;
    
    return 0;
}
