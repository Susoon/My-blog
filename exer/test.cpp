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
	int e;

public:
	BankAccount(int z) : e(z) {}
	int get_b() const { return bte; }
};

int Account::te = 10;
int BankAccount::bte = 10000;

int main(void)
{
	BankAccount bacc(1);

	cout << bacc.get_b() << endl;
}
