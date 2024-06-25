//Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

class Matrix{
private:
  int size;
  int *data;

public:
  Matrix(int size) {
    this->size = size;
    data = new int[size];
  }

  ~Matrix() {
    delete[] data;
  }

  int& operator[](int index) {
    if (index < 0 || index >= size) {
      cout << "Error: Index out of bounds!" << endl;
      exit(1);
    }
    return data[index];
  }

  Matrix operator+(const Matrix& other) const {
    if (this->size != other.size) {
      cout << "Error: Matrices must have the same size for addition!" << endl;
      exit(1);
    }
    Matrix result(size);
    for (int i = 0; i < size; i++) {
      result[i] = this->data[i] + other.data[i];
    }
    return result;
  }
  void print() {
    for (int i = 0; i < size; i++) {
      cout << data[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  int size;

  cout << "Enter the size of the matrices : ";
  cin >> size;

  Matrix matrix1(size), matrix2(size);

  cout << "Enter elements for matrix 1 : ";
  for (int i = 0; i < size; i++) {
    cin >> matrix1[i];
  }

  cout << "Enter elements for matrix 2 : ";
  for (int i = 0; i < size; i++) {
    cin >> matrix2[i];
  }

  Matrix result = matrix1 + matrix2;

  cout << "Matrix 1 : ";
  matrix1.print();

  cout << "Matrix 2 : ";
  matrix2.print();

  cout << "Sum : ";
  result.print();

  return 0;
}

