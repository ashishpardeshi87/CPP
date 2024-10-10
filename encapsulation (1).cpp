#include<iostream>
using namespace std;

class BankAccount{
  private:
  //Private data members
  string accountNumber;
  double balance;
  
  public:
  //Constructor to initialize the bank account 
  BankAccount(string accNum, double initialBalance){
    accountNumber = accNum;
    balance = initialBalance;
    
  }
  
  //Public method to deposit money
  void deposit(double amount){
    if(amount>0){
      balance += amount;
      
    }
  }
  
  //Pubilc method to withdraw money
  void withdraw(double amount){
    if(amount>0 && amount<=0){
      balance -= amount;
    }else{
      cout<<"Insufficient funds or invalid amount."<<endl;
    }
  }
  
  //Pubilc method to check the balance
  double getBalance()const{
    return balance;
  }
  
  //Pubilc method to display account details
  void displayAccountDetails()const{
    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Balance: $"<<balance<<endl;
    
  }
  
};

int main(){
  
  //Create a BankAccount object
  BankAccount myAccount("123456789", 1000.00);
  
  //Display amount details
  myAccount.displayAccountDetails();
  
  //deposit money
  myAccount.deposit(500.00);
  cout<<"After deposit: "<<endl;
  myAccount.displayAccountDetails();
  
  //withdraw money
  myAccount.withdraw(200.00);
  cout<<"After withdrawal: "<<endl;
  myAccount.displayAccountDetails();
  
  //Attempt to access Private members directly(will cause a compile-time error)
  //myAccount.balance = 500.00;//Error: 'balance'is Private
  //cout<<myAccount.balance;//Error: 'balance'is Private
  
  return 0;
  
}

Output:

Account Number: 123456789
Balance: $1000
After deposit: 
Account Number: 123456789
Balance: $1500
Insufficient funds or invalid amount.
After withdrawal: 
Account Number: 123456789
Balance: $1500
