#include <iostream>

using namespace std;

class Account
{
private:
	static int te;
public:
	int get() const { return te; }
};

class BankAccount : public Account
{
public:
	static int bte;

public:
	int get_b() const { return bte; }
};

int Account::te = 10;
int BankAccount::bte = 10000;

int main(void)
{
	Account acc;
	BankAccount bacc;
	cout << acc.get() << endl;
	cout << bacc.get() << endl;
	cout << Account::bte << endl;
}
