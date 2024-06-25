// Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.

#include<iostream>
using namespace std;

class Car {
    string company;
    string model;
    int year;
    
    public :
        
        Car() {
            cout << "Enter the company : ";
            getline(cin,company);
            
            cout << "Enter the model : ";
            getline(cin,model);
            
            cout << "Enter the year : ";
            cin >> year;
        }
        
        void get() {
            cout<<"\nThe company is : " << company << endl << "The model is : " << model << endl << "The year is : " << year << endl;
        }
};

int main(){
    Car obj;
    
    obj.get();
}
