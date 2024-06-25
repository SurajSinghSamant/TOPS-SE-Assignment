// Write a program of to swap the two values using template

#include<iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}

int main() {
  int x = 5, y = 10;
  double d1 = 2.2, d2 = 1.1;
    string s1 = "Template", s2 = "Swap";

  cout << "Before swapping :" << endl;
  cout << "x : " << x << ", y : " << y << endl;
  cout << "d1 : " << d1 << ", d2 : " << d2 << endl;
  cout << "s1 : " << s1 << ", s2 : " << s2 << endl;

  swapValues(x, y);
  swapValues(d1, d2);
  swapValues(s1, s2);

  cout << "\nAfter swapping :" << endl;
  cout << "x : " << x << ", y : " << y << endl;
  cout << "d1 : " << d1 << ", d2 : " << d2 << endl;
  cout << "s1 : " << s1 << ", s2 : " << s2 << endl;

  return 0;
}


