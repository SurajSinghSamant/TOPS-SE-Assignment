// Write a program to find the max number from given two numbers using friend function

#include <iostream>
using namespace std;

class MaxNumber {
private:
    int a, b;
public:
    MaxNumber(int x, int y) {
        a = x;
        b = y;
    }

    friend int findMax(MaxNumber obj);

    void printMax() {
        int maxVal = findMax(*this);  
        cout << "The maximum number is : " << maxVal << endl;
    }
};

int findMax(MaxNumber obj) {
    return (obj.a > obj.b) ? obj.a : obj.b;
}

int main() {
    int a, b;
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;

    MaxNumber obj(a, b);
    obj.printMax();

    return 0;
}
