# include "Account.h"
# include <iostream>

Account::Account(double balance) {
	setBalance(balance);

}

void setBalace(double balance) {
	if (balance >= 0) {
		this -> balance = balance;
	}
	else {
		this->balance = 0;
		cerr << "The amount should be equal or greater than zero." << endl;
	}
}

double getBalance(double balance) {
	return this->balance;
}

void Account::credit(double amount) {
	if (amount < 0) {
		cerr << "The credit balance should be possitive amount." << endl;
	}
	else {
		this->balance += amount;
	}
}

void Account::debit(double amount) {
	if (balance - amount >= 0) {
		this->balance -= amount;
	}
	else {
		cerr << "You do not have enough funds for that." << endl;
	}
}

