// Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information. Accept address from each student implement using of aggregation

#include <iostream>
#include <string>

using namespace std;

class Address {
    
private :
    string Street;
    string City;
    string State;
    string Pincode;

public :
    Address(){}

    void input() {
        cout << "Enter Street Name : ";
        getline(cin, Street);
        
        cout << "Enter City Name : ";
        getline(cin, City);
        
        cout << "Enter State Name : ";
        getline(cin, State);
        
        cout << "Enter Pincode : ";
        getline(cin, Pincode);
    }

    void display() const {
        cout << "Address : " << Street << ", " << City << ", " << State << ", " << Pincode << "\n";
    }
};

class Student {
    
private :
    string Name;
    string Classname;
    int RollNo;
    float Marks;
    Address address;
    
public:

    Student() {}

    void input() {
        cout << "Enter the name : ";
        getline(cin, Name);
        
        cout << "Enter class : ";
        getline(cin, Classname);
        
        cout << "Enter roll number : ";
        cin >> RollNo;
        
        cout << "Enter marks : ";
        cin >> Marks;
        
        cin.ignore();
        address.input();
    }

    char calculateGrade() const {
        if (Marks >= 90) return 'A';
        else if (Marks >= 80) return 'B';
        else if (Marks >= 70) return 'C';
        else if (Marks >= 60) return 'D';
        else return 'F';
    }
    
    void displayInfo() const {
        cout << "Name : " << Name << endl;
        cout << "Class : " << Classname << endl;
        cout << "Roll Number : " << RollNo << endl;
        cout << "Marks : " << Marks << endl;
        cout << "Grade : " << calculateGrade() << endl;
        address.display();
    }
};

int main() {
    Student student;
    
    student.input();

    student.displayInfo();

    return 0;
}

