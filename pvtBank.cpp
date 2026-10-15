#include <iostream>
using namespace std;
class BankAccount{ //encapsulation: bank account hide sensitive data(balanca,account no)
	private:
		long long accountNumber;
		double balance;
		public: //constructor to initialize account
			BankAccount(long long accNo, double initialBalance){
				accountNumber = accNo;
				balance = initialBalance;
			}
			void checkBalance() //function to check balance
			{
				cout<<"\n---------------";
				cout<<"\nCurrent Balance: $"<<balance;
				cout<<"\n---------------\n";
			}
			void deposit(double amount){ //fuction to deposite amount
				if (amount > 0){
					balance += amount;
					cout<<"\n Successfully deposited $" <<amount;
					checkBalance();
				}else{
					cout<<"\nInvalid deposit amount!\n";
				}
			}
			void withdraw(double amount){
				if (amount > 0 && amount <= balance){
					balance -= amount;
					cout<<"\nSuccessfully withdrew $"<<amount;
					checkBalance();
				} else if (amount > balance){
					cout<<"\nError: Insufficient balance!\n";
				} else{
					cout<<"\nInvalid withdrawal amount!\n";
				}
			}
				void send(double amount){
				if (amount > 0 && amount <= balance){
					balance -= amount;
					cout<<"\nSuccessfully Send $"<<amount;
					checkBalance();
				} else if (amount > balance){
					cout<<"\nError: Insufficient balance!\n";
				} else{
					cout<<"\nInvalid send amount!\n";
				}
			}
	};
	int main(){
		long long accNum = 123456789;
		double initialBal = 1000.0;
		
		BankAccount myAccount(accNum, initialBal);
		int choice;
		double amount;
		do{
			cout<<"\n*** ATM MENU ***";
			cout<<"\n1. Check Balance";
			cout<<"\n2. Deposite Cash";
			cout<<"\n3. Withdrow Cash";
			cout<<"\n4. Send Cash";
			cout<<"\n5. Exit";
			cout<<"\nEnter Your Choice (1-5):";
			cin>> choice;
			
			switch (choice){
				case 1:
					myAccount.checkBalance();
					break;
					
				case 2:
					cout<<"Enter Amount To Deposit: $";
					cin>>amount;
					myAccount.deposit(amount);
					break;
				case 3:
				    cout<<"Enter Amount To Withdrar: $";
				    cin>>amount;
				    myAccount.withdraw(amount);
				    break;
				    
				case 4:
				    cout<<"Enter Amount To Send: $";
				    cin>>amount;
				    myAccount.send(amount);
				    break;
				    
				case 5:cout<<"\n Thank You For Using The ATM. Goodbay!\n";
				break;
				
				default:
					cout<<"\nInvalid choice! Plase Choose Between 1 and 5.\n";
			}
		} while (choice !=5);
		return 0;
	}
