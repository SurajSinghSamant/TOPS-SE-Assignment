/* Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perameter */

#include <iostream>
using namespace std;

class Rectangle {
    
private :
    
  double length;
  double width;

public :
  
  Rectangle() {
    cout << "Enter the length of the rectangle : ";
    cin >> length;
      
    cout << "Enter the width of the rectangle : ";
    cin >> width;

  }

  double getArea() {
    return length * width;
  }

  double getParameter() {
    return 2 * (length + width);
  }
};

int main() {
  Rectangle Rect; 

  cout << "Area : " << Rect.getArea() << endl;
  cout << "Parameter : " << Rect.getParameter() << endl;

  return 0;
}


