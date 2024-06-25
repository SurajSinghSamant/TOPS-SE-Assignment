// Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.

#include<iostream>
using namespace std;

class Bankaccount {
    int AccountNum;
    int Balance;
    int Choice;
    double Amount;
    
    public:
    Bankaccount() {
        
        cout << "Enter Bank Account Number : ";
        cin >> AccountNum;
        
        cout << "Enter Balance : ";
        cin >> Balance;
        
        cout << "\n Account Number is : " << AccountNum << endl;
        cout << " Balance is : " << Balance << endl;
        
        cout << "\n-------------Choice-----------------\n";
        cout << "\n1. Deposit \n2. Withdraw\n";
        
        cout << "\nEnter Your Choice : ";
        cin >> Choice;
        
        if(Choice == 1) {
            cout << "\n-------------You Selected Deposit----------------\n\n";
            cout << "Enter Deposit Amount : ";
            cin >> Amount;
            
            Balance += Amount;
            cout << "\nTransaction Sucessful";
            cout << "\nNow Balance is : " << Balance << endl;
        }
        else if(Choice == 2){
            cout << "\n-------------You Selected Withdraw----------------\n\n";
            cout << "Enter Withdraw Amount : ";
            cin >> Amount;
            
            if(Amount < Balance){
                Balance -= Amount;
                cout << "\nTransaction Sucessful";
                cout << "\nRemaining Balance is : " << Balance << endl;
            } else if(Amount > Balance) {
                cout << "\nInsufficient Balance\n";
            }
            else{
                cout << "Invalid Choice";
            }
        }
    }
};

int main() {
    Bankaccount obj;
        
    return 0;
}
