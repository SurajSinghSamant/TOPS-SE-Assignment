// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;

class calculator{
    int a,b;
    
    public:
    
     calculator() {
        cout << "Enter a : ";
        cin >> a;
        
        cout << "Enter b : ";
        cin >> b;
    }
    
    void addition() {
        int sum = a + b;
        cout << "Addition is " << a << " + " << b << " = " << sum << endl;
    };
    
    void sub() {
        int sub = a - b;
        cout << "Subtraction is " << a << " - " << b << " = " << sub << endl;
    }
    
    void mul() {
        int mul = a * b;
        cout << "Multiplication is " << a << " * " << b << " = " << mul << endl;
    }
    
    void div() {
        int div = a / b;
        cout << "Divison is " << a << " / " << b << " = " << div << endl;
    }
};

int main(){
    calculator obj;
    obj.addition();
    obj.sub();
    obj.mul();
    obj.div();
        
    return 0;
}
