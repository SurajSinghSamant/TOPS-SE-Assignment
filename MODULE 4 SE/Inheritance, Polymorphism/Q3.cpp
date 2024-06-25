//// Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)

#include<iostream>
using namespace std;

class person {
protected:
    string name;
    int age;

public:
    void get() {
        cout << "\nEnter the name of person : ";
        cin >> name;
        
        cout << "Enter age of person : ";
        cin >> age;
    }

    void display() {
        cout << "\n------------- Output -------------\n";
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }

    void changeDetails() {
        char choice;
        cout << "\nDo you want to change the name (y/n)? ";
        cin >> choice;
        
        if (choice == 'y') {
            cout << "Enter updated name: ";
            cin >> name;
        }

        cout << "Do you want to change the age (y/n)? ";
        cin >> choice;

        if (choice == 'y') {
            cout << "Enter updated age: ";
            cin >> age;
        }

        cout << "\nUpdated details:\n";
        display();
    }
};

class student : public person {
protected:
    float percentage;

public:
    void getPercentage() {
        cout << "Enter percentage of student: ";
        cin >> percentage;
    }

    void display() {
        person::display();
        cout << "Percentage: " << percentage << "%" << endl;
    }

    void changeDetails() {
        person::changeDetails();

        char choice;
        cout << "Do you want to change the percentage (y/n)? ";
        cin >> choice;

        if (choice == 'y') {
            cout << "Enter updated percentage: ";
            cin >> percentage;
        }

        cout << "\nUpdated student details:\n";
        display();
    }
};

class teacher : public person {
protected:
    int salary;

public:
    void getSalary() {
        cout << "Enter salary of teacher: ";
        cin >> salary;
    }

    void display() {
        person::display();
        cout << "Salary: " << salary << endl;
    }

    void changeDetails() {
        person::changeDetails();

        char choice;
        cout << "Do you want to change the salary (y/n)? ";
        cin >> choice;

        if (choice == 'y') {
            cout << "Enter updated salary: ";
            cin >> salary;
        }

        cout << "\nUpdated teacher details:\n";
        display();
    }
};

int main() {
    student s;
    teacher t;

    s.get();
    s.getPercentage();

    t.get();
    t.getSalary();

    cout << "\nInitial student details:\n";
    s.display();

    cout << "\nInitial teacher details:\n";
    t.display();

    cout << "\nUpdating student details:\n";
    s.changeDetails();

    cout << "\nUpdating teacher details:\n";
    t.changeDetails();

    return 0;
}

