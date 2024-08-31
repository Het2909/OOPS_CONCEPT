#include <iostream> 
#include <string> 
using namespace std;
class BankAccount { 
  private: 
    string accountNumber; 
    double balance;

  public:
    BankAccount(const std::string & accNum, double initialBalance): accountNumber(accNum), balance(initialBalance) {}

    void deposit(double amount) {
      balance += amount; 
      cout << "Deposit successful.\nCurrent balance: " << balance << std::endl;
	    }

    void withdraw(double amount) {
      if (amount <= balance) { 
        balance -= amount; 
        cout << "Withdrawal successful.\nCurrent balance: " << balance << endl;
        cout << "Insufficient balance.\nCannot withdraw." << endl; 
        
      }
    }
};

int main() {
  string sacno = "SB-123";
  double Opening_balance, deposit_amt, withdrawal_amt; 
  Opening_balance = 1000; 
  cout << "A/c. No." << sacno << " Balance: " << Opening_balance << std::endl;

  BankAccount account(sacno, 1000.0); 
  deposit_amt = 1500; 
  cout << "Deposit Amount: " << deposit_amt << endl;
  account.deposit(deposit_amt); 
  withdrawal_amt = 750; 
  cout << "Withdrawal Amount: " << withdrawal_amt << endl;
  account.withdraw(withdrawal_amt); 
  withdrawal_amt = 1800; 
  cout << "Attempt to withdrawal Amount: " << withdrawal_amt << endl;
  account.withdraw(withdrawal_amt); 

  return 0;
}

