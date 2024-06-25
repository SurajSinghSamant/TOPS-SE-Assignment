// Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)

#include<iostream>
using namespace std;

class students{
    protected :
        int RollNo;
    
    public :
        
    void Studentrollno(){
            cout << "Enter Your Roll No : ";
            cin >> RollNo;
        }
};

class Test : public students{
    
    protected :
        int English, Hindi;
    
    public :
        void testmarks() {
            cout << "Enter Your English Marks : ";
            cin >> English;
            
            cout << "Enter Your Hindi Marks : ";
            cin >> Hindi;
        }
    
};

class result : public Test {
    
    protected :
        int Total;
    
    public :
        
        void calc(){
            Total = English + Hindi;
        }
        void Result(){
            cout << "\nThe Total Marks of the Test are : " << Total << endl;
            cout << "The Roll Number of student is : " << RollNo << endl;
        }
};

int main(){
    result main;
    
    main.Studentrollno();
    main.testmarks();
    main.calc();
    main.Result();
}
