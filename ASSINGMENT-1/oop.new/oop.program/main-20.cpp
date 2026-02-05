#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance = 0;

public:
    void deposit(int amt){ balance += amt; }
    void withdraw(int amt){ balance -= amt; }
    int getBalance(){ return balance; }
};

int main() {
    BankAccount b;
    b.deposit(1000);
    b.withdraw(300);
    cout << b.getBalance();
    return 0;
}
