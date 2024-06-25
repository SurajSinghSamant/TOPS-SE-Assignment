// Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
using namespace std;

class PersonalDetails
{
protected :
    
    string Name;
    int RollNo;
    
public :
    
    void getStudentDetails() {
        cout << "Enter name : ";
        cin >> Name;
        cout << "Enter roll number : ";
        cin >> RollNo;
    }
};

class Marks {
    
protected :
    float math, physics, chemistry, biology, english;
    
public :
    void getMarks() {
        cout << "Enter marks for Math, Physics, Chemistry, Biology, English : ";
        cin >> math >> physics >> chemistry >> biology >> english;
    }
};

class Student : public PersonalDetails, public Marks {
public:
    void MarkSheet() {
        cout <<"--------Mark Sheet--------" << endl;
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << RollNo << endl;
        cout << "Math: " << math << endl;
        cout << "Physics: " << physics << endl;
        cout << "Chemistry: " << chemistry << endl;
        cout << "Biology : " << biology << endl;
        cout << "English : " << english << endl;
    }
};

int main()
{
    Student student;
    student.getStudentDetails();
    student.getMarks();
    student.MarkSheet();
    return 0;
}

