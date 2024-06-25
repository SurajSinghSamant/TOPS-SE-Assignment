// Write a program to calculate the area of circle, rectangle and triangle using Function Overloading

#include<iostream>
using namespace std;

const float pi = 3.14;

float area(float n, float b, float h) {
    float ar;
    ar = n * b * h;
    return ar;
}

float area(float r) {
    float ar;
    ar = pi * r * r;
    return ar;
}

float area(float l, float b) {
    float ar;
    ar = l * b;
    return ar;
}

int main()
{
    float b, h, r, l;
    float result;

    cout << "Enter the Base & Height of Triangle : ";
    cin >> b >> h;
    result = area(0.5, b, h);
    cout << "Area of Triangle : " << result << endl;

    cout << "Enter the Radius of Circle : ";
    cin >> r;
    result = area(r);
    cout << "Area of Circle : " << result << endl;

    cout << "Enter the Length & Breadth of Rectangle : ";
    cin >> l >> b;
    result = area(l, b);
    cout << "Area of Rectangle : " << result << endl;

    return 0;
}

