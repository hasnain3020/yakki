#include <iostream>
using namespace std;
class BankAccount {
private:
    static int totalBalance;
    int accountBalance;
public:
    BankAccount(int balance) {
        accountBalance = balance;
        totalBalance += balance;
    }
    void deposit(int amount) {
        accountBalance += amount;
        totalBalance += amount;
    }
    static int getTotalBalance() {
        return totalBalance;
    }
    void displayBalance() {
        cout << "Individual account balance: " << accountBalance << endl;
    }
};
int BankAccount::totalBalance = 0;
int main() {
    BankAccount account1(500);
    BankAccount account2(1000);
    BankAccount account3(1500);
    account1.displayBalance();
    account2.displayBalance();
    account3.displayBalance();
    account1.deposit(200);
    account2.deposit(300);
    account3.deposit(400);
    cout << "After deposits:" << endl;
    account1.displayBalance();
    account2.displayBalance();
    account3.displayBalance();
    cout << "Total balance across all accounts: " << BankAccount::getTotalBalance() << endl;
    return 0;
}