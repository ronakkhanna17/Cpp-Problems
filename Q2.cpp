#include<iostream>
#include<string>
using namespace std ;
class BankAccount{
    public :
    int account_number ;
    string account_holder ;
    int balance = 0 ;

    int deposit(int amount){
        balance = balance + amount ;
    }
    void display(){
        cout << "Account Number: " << account_number<<endl ;
        cout << "Account Holder Name: "<<account_holder<<endl;
        cout << "Balance: " << balance<<endl;
    }
};
int main(){
    BankAccount a1 ;
    cout << "Enter the acc_number: ";
    cin >> a1.account_number ;
    cout << "Enter name : ";
    cin >> a1.account_holder ;
    a1.display();
    int money ;
    cout << "Enter the amount: ";
    cin >> money ;
    a1.deposit(money);
    a1.display();
}