// WAP to create simple calculator using class
#include <iostream>
using namespace std;

class Calculator {
    
public :
    
  double num1, num2;
  char operation;

  void Numbers() {
    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number : ";
    cin >> num2;
  }

  void Operation() {
    cout << "Enter an operation (+, -, *, /) : ";
    cin >> operation;
  }

  double calculate()
    {
    switch (operation) 
    {
      case '+' :
        return num1 + num2;
            
      case '-' :
        return num1 - num2;
            
      case '*' :
        return num1 * num2;
            
      case '/' :
        if (num2 == 0) {
          cout << "Error : Division by zero!" << endl;
          return 0;
        } else {
          return num1 / num2;
        }
            
      default:
        cout << "Error : Invalid operation" << endl;
        return 0;
    }
  }
};

int main() {
  Calculator calc;

  calc.Numbers();
  calc.Operation();

  double result = calc.calculate();

  if (result != 0) {
    cout << "Result  : " << result << endl;
  }

  return 0;
}


