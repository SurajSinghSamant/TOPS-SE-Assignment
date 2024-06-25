// Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;

class Rectangle {
    protected :
        float length, width;
        int calc;
};

class area:public Rectangle{
    
    public:
        
        void get(){
            cout << "Enter the length of the rectangle : ";
            cin >> length;
            
            cout << "Enter the width of the rectangle : ";
            cin >> width;
        }
        
        void Calculation() {
        calc = length * width;
            
            cout << "The Area of Rectangle is : " << calc << endl;
        }
    
};

int main(){
    area obj;
    
    obj.get();
    obj.Calculation();
}

