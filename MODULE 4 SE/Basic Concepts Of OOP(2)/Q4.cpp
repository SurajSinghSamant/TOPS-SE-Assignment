/* Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference. */
#include <iostream>
using namespace std;

class Circle {
    
private :
    
  double radius;

public :
    
  Circle(double r) {
    radius = r;
  }

  void setRadius(double r) {
    radius = r;
  }

  double calculateArea() {
    return 3.14 * radius * radius;
  }

  double calculateCircumference() {
    return 2 * 3.14 * radius;
  }
};

int main() {
  double radius;

  cout << "Enter the radius of the circle : ";
  cin >> radius;
    
  Circle myCircle(radius);

  cout << "Area of the circle : " << myCircle.calculateArea() << endl;
  cout << "Circumference of the circle : " << myCircle.calculateCircumference() << endl;

  return 0;
}

