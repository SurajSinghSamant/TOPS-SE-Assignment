// Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>
using namespace std;

inline int multiplication(int a, int b) {
  return a * b;
}

inline int cube(int x) {
  return x * x * x;
}

int main() {
  int x, y;

  cout << "Enter x : ";
  cin >> x;

  cout << "Enter y : ";
  cin >> y;

  cout << "Multiplication : " << multiplication(x, y) << endl;
  cout << "Cubic Value of x : " << cube(x) << endl; 

  return 0;
}
