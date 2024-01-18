# include <iostream>
# include <vector>
using namespace std;
# include "Account.h"

int main() {
	int numberOfAccounts = 0;
	cout << "Enter the number of accounts you want to create: ";
	cin >> numberOfAccounts;
	vector<Account> accounts;

	for (int i = 0; i < numberOfAccounts; i++) {
		accounts.push_back(Account::setBalance());
	}

	return 0;
}