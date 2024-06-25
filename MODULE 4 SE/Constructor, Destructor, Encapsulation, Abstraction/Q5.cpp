// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;

class Triangle {
    int Side1;
    int Side2;
    int Side3;
    
    public :
    
    Triangle() {
        cout << "Enter the length of the first side : ";
        cin >> Side1;
        
        cout << "Enter the length of the second side : ";
        cin >> Side2;
        
        cout << "Enter the length of the third side : ";
        cin >> Side3;
        };
    
    int Equilateral() {
        return (Side1 == Side2 && Side2 == Side3);
    }

    int Isosceles() {
        return (Side1 == Side2 || Side1 == Side3 || Side2 == Side3);
    }

    int Scalene() {
        return (!Equilateral() && !Isosceles());
    }
    
};

int main(){
    Triangle obj;
    
    if(obj.Equilateral()){
        cout << "\nYour Triangle Is Equilateral\n";
        
    }else if(obj.Isosceles()){
        cout << "\nYour Triangle Is Isosceles\n";
        
    }else if(obj.Scalene()){
        cout << "\nYour Triangle Is Scalene\n";
    }
    
    return 0;
}
