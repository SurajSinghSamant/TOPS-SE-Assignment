// Write a C++ Program to show access to Private Public and Protected using Inheritance

#include<iostream>
using namespace std;

class X {
    string name;
    
    public :
            X(){
                cout << "Enter Your Name : ";
                cin >> name;
            };
};

class Y : public X {
    
    protected :
        int age;
    
        public :
            Y() {
                cout << "Enter Your Age : ";
                cin >> age;
            }
};

int main(){
    Y obj;
    
    return 0;
}
