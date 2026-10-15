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
			cout<<"\n4. Exit";
			cout<<"\nEnter Your Choice (1-4):";
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
				    
				case 4:cout<<"\n Thank You For Using The ATM. Goodbay!\n";
				break;
				
				default:
					cout<<"\nInvalid choice! Plase Choose Between 1 and 4.\n";
			}
		} while (choice !=4);
		return 0;
	}
//	*** ATM MENU ***
//1. Check Balance
//2. Deposite Cash
//3. Withdrow Cash
//4. Exit
//Enter Your Choice (1-4):1
//
//---------------
//Current Balance: $1000
//---------------
//
//*** ATM MENU ***
//1. Check Balance
//2. Deposite Cash
//3. Withdrow Cash
//4. Exit
//Enter Your Choice (1-4):2
//Enter Amount To Deposit: $2000
//
// Successfully deposited $2000
//---------------
//Current Balance: $3000
//---------------
//
//*** ATM MENU ***
//1. Check Balance
//2. Deposite Cash
//3. Withdrow Cash
//4. Exit
//Enter Your Choice (1-4):3
//Enter Amount To Withdrar: $1500
//
//Successfully withdrew $1500
//---------------
//Current Balance: $1500
//---------------
//
//*** ATM MENU ***
//1. Check Balance
//2. Deposite Cash
//3. Withdrow Cash
//4. Exit
//Enter Your Choice (1-4):1
//
//---------------
//Current Balance: $1500
//---------------
//
//*** ATM MENU ***
//1. Check Balance
//2. Deposite Cash
//3. Withdrow Cash
//4. Exit
//Enter Your Choice (1-4):
