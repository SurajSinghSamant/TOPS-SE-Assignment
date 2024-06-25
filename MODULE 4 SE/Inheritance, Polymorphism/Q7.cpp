// Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include<iostream>
using namespace std;
class X {
    protected :
    string Name;
    public:
        
        X(){
            
        };
};

class Y: public X{
    protected:
    int Age;
        public:
            Y(){
                
            };
};

class Z : public Y{
    
    public :
        Z(){
        
        cout << "Enter Name : ";
        cin >> Name;
        
        cout << "Enter Age : ";
        cin >> Age;
        
        cout << "Your Name is : "<< Name << endl;
        
        cout << "Your Age is : " << Age << endl;
        };
};

int main(){
    Z obj;
}
