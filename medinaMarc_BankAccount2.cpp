#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
// Create nondisclosed variables of interest
    long accID;
    string accName;
    double accBalance;
    double interest;
public:
// Initialize public variables and functions
    void Initialize(long newaccID, string newaccName, double newaccBalance);
    string SetHolderName(string newaccName);
    double IncreaseBalance(double newaccBalance);
    double DecreaseBalance(double newaccBalance);
    void Deactivate();
    bool IsActive();
    int GetID() const;
    string GetHolderName() const;
    double GetBalance() const;
    BankAccount();
    BankAccount(long resaccID, string resaccName, double resaccBalance);
    double addDailyInterest();
    void Print();
};
// Create initial definition of Bank Account
void BankAccount::Initialize(long newaccID, string newaccName, double newaccBalance) {
    accID = newaccID;
    accName = newaccName;
    accBalance = newaccBalance;
    return;
}

// Give account holders name
string BankAccount::SetHolderName(string newaccName) {
    accName = newaccName;
    return accName;
}
// Increase balance based off of previous amount
double BankAccount::IncreaseBalance(double newaccBalance) {
    accBalance = accBalance + newaccBalance;
    return accBalance;
}
// Decrease balance based off of previous amount
double BankAccount::DecreaseBalance(double newaccBalance) {
    accBalance = accBalance - newaccBalance;
    return accBalance;
}
// 
void BankAccount::Deactivate() {
    accID = 00000-00000;
    accName = " ";
    accBalance = 0;
    return;
}
bool BankAccount::IsActive() {
    if (accID == 00000-00000){
        return false;
    }
    else {
        return true;
    }
}
// Return asked values
int BankAccount::GetID() const {
    return accID;
}
string BankAccount::GetHolderName() const {
    return accName;
}
double BankAccount::GetBalance() const {
    return accBalance;
}
BankAccount::BankAccount() {
    accID = 00000-00000;
    accName = " ";
    accBalance= 0;
}
BankAccount::BankAccount(long newaccID, string newaccName, double newaccBalance) {
    accID = newaccID;
    accName = newaccName;
    accBalance =newaccBalance;
}
// Assume r = 0.03 interest and apply to account
double BankAccount::addDailyInterest() {
    interest = accBalance * 0.03;
    accBalance = accBalance - interest;
    return accBalance;
}
// Print
void BankAccount::Print() {
    cout << "Account ID: " << accID << endl;
    cout << "Account Name: " << accName << endl;
    cout << "Account Balance: " << accBalance << endl;
    if (accID = 0000000000) {
        cout << "Account is currently inactive.";
    }
    else {
        cout << "Account is currently active.";
    }
    return;
}
