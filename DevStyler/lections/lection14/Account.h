# ifndef BANK_ACCOUNT_H
# define BANK_ACCOUNT_H

class Account() {
public:
	Account(double);
	void credit(double);
	void debit(double);
	double getBalance();
private:
	double balance;
}

# endif //BANK_ACCOUNT_H
