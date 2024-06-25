// Write a program to swap the two numbers using friend function without using third variable

#include <iostream>
using namespace std;

class SwapNum {
public :
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    void swapValues() {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    void display() {
        cout << "After swap :" << endl;
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
    }

private:
    int a, b;
};

int main() {
    SwapNum obj;
    int num1, num2;

    cout << "Enter value of a : ";
    cin >> num1;

    cout << "Enter value of b : ";
    cin >> num2;

    obj.setData(num1, num2);
    obj.swapValues();
    obj.display();

    return 0;
}
