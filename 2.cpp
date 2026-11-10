#include <iostream>

struct BankAccount {
    int accountNumber;
    char ownerName[50];
    double balance;
};

void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    BankAccount account;

    std::cout << "Number of money: ";
    std::cin >> account.accountNumber;

    std::cout << "Name: ";
    std::cin >> account.ownerName;

    std::cout << "Balance: ";
    std::cin >> account.balance;

    double newBalance;
    std::cout << "New balance: ";
    std::cin >> newBalance;

    changeBalance(account, newBalance);

    std::cout << "Balance now: " << account.ownerName
              << ", " << account.accountNumber
              << ", " << account.balance << std::endl;

    return 0;
}