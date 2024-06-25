// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include<iostream>
using namespace std;

class person {
    string Name; // variables are declared outside of public section thats why they are already private by default
    int Age;
    string Country;
    
    public:
        
        void set() {
            cout << "Enter the name : ";
            cin >> Name;
            
            cout << "Enter the age : ";
            cin >> Age;
            
            cout << "Enter the country name : ";
            cin >> Country;
        }
        
        void get() {
            cout << "\nYour Name is "<< Name << endl;
            cout << "Your Age is  "<< Age << endl;
            cout << "Your Country is "<< Country << endl;
        }
};

int main(){
    person obj;
    
    obj.set();
    obj.get();
}
