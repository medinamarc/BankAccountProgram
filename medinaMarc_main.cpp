/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // initialize
    long newaccID;
    string newaccName;
    double newaccBalance;
    double newinterest;
    char userDeactive = 'N';
    
    // gain user response
    BankAccount BankAccount1;
    cout << "Enter your account ID: ";
    cin >> newaccID;
    cout << "Enter your account name: ";
    cin >> newaccName;
    cout << "Enter your account balance: ";
    cin >> newaccBalance;
    BankAccount1.Initialize(newaccID, newaccName, newaccBalance);
    cout << endl;
    cout << "Account is initialized!" << endl;
    cout << endl;
    
    // Print
    BankAccount1.SetHolderName(newaccName);
    cout << "Account name is " << BankAccount1.SetHolderName(newaccName) << endl;
    BankAccount1.IncreaseBalance(newaccBalance);
    cout << "Account now has " << BankAccount1.IncreaseBalance(newaccBalance) << endl;
    BankAccount1.DecreaseBalance(newaccBalance);
    cout << "Account now has " << BankAccount1.DecreaseBalance(newaccBalance) << endl;
    cout << endl;
    
    // possible question
    cout << "Would you like to deactivate your account? (Y for yes, N for no): ";
    cin >> userDeactive;
    
    if ( userDeactive == 'Y') {
        BankAccount1.Deactivate();
        cout << "Account has been deactivated. ";
        cout << endl;
    }
    else {
        BankAccount1.IsActive();
        cout << "Account is active." << endl;
        BankAccount1.Print();
        cout << endl;
        
    }
    BankAccount1.addDailyInterest();
    cout << "Including interest, Account now has: " << BankAccount1.addDailyInterest();
    
    
    
    return 0;
}
