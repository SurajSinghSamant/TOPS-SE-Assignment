/* Define a class to represent a bank account. Include the following members:
  Data Member:
 -Name of the depositor
 -Account Number
 -Type of Account
 -Balance amount in the account
 
 Member Functions
 
 -To assign values
 -To deposited an amount
 -To withdraw an amount after checking balance
 -To display name and balance */

#include<iostream>
using namespace std;

class Bankdata{

    string Name;
    double Account;
    string Acctype;
    double Balance, Value;
    
    public :
    
    void get() {
        
        cout << "Enter your name : ";
        cin >> Name;
        
        cout << "Enter your account number : ";
        cin >> Account;
        
        cout << "Enter your account type : ";
        cin >> Acctype;
    
        cout << "Enter your balance : ";
        cin >> Balance;
        
        cout << "--------Bank Account Details-------------------\n";
        cout << "\nAccount Owner : "<< Name;
        cout << "\nAccount Number : "<< Account;
        cout << "\nAccount Type : "<< Acctype;
        cout << "\nAccount Balance : "<< Balance;
    }
    
    void Deposit() {
        
        cout << "\n--------You selected deposit-------------------\n";
        cout << "\nEnter Your Deposit Value : ";
        cin >> Value;
        
        Balance += Value;
        
        cout << "Deposited Succesfully";
        cout << "\nNow Your Balance Is : "<< Balance;
    }
    
    void Withdraw() {
      cout << "\n--------You selected Withdraw-------------------\n";
      cout << "\nEnter Your Withdraw Amount : ";
      cin >> Value;

      if (Balance - Value < 0) {
        cout << "Insufficient Funds";
      } else {
        Balance -= Value;
        cout << "Withdrawad Succesfully";
        cout << "\nNow Your Balance Is : " << Balance << endl;
      }
    }

};

int main(){
    
    Bankdata bank;
    
    int choice;
    
        bank.get();
        cout << "\n\n 1. Deposit";
        cout << "\n 2. Withdraw\n";
        
        cout << "\nEnter Your Choice : ";
        cin >> choice;
    
        switch(choice)
        {
        case 1 :
                bank.Deposit();
                break;
                
        case 2 :
                bank.Withdraw();
        }
    
    return 0;
}



