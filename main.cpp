

#include <iostream>
#include "Bank.hpp"
using namespace std;
int main() {
    
    Bank bank(2, 2);
    Client * john = bank.CreateClient(1, "John");
    Client * barbara = bank.CreateClient(1, "Barbara");
    Account * personal = bank.CreateAccount(1, john);
    Account * business = bank.CreateAccount(2, john, barbara);
    Account test(1, john);
    cout << personal->GetInterestRate()<< endl;
    cout << business->GetInterestRate()<< endl;
    Account::SetInterestRate(3);
    cout << business->GetInterestRate()<< endl;
    cout << personal->GetInterestRate()<< endl;
    personal->Deposit(2000.0);
    cout << personal->GetBalance()<< endl;
    return 0;
    
}
