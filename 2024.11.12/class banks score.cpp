#include <iostream>
#include <string>

using namespace std;

class BanksAccount {
	int numberAccount;
	string titleBank;
	string titleAccount;
	float balance;
public:
	void SetNumberAccount(int numbAccount) { numberAccount = numbAccount; }
	int GetNumberAccount() { return numberAccount; }
	void SetTitleBank(string secondTitleBank) { titleBank = secondTitleBank; }
	string GetTitleBank() { return titleBank; }
	void SetTitleAccount(string secondTitleAccount) { titleAccount = secondTitleAccount; }
	string GetTitleAccount() { return titleAccount; }
	void SetBalance(float balanced) { balance = balanced; }
	float GetBalance() { return balance; }
	BanksAccount(int numbAccount = 0, string titlebank = " ", string titleaccount = " ", float Balance = 0.0): numberAccount(numbAccount), titleBank(titlebank), titleAccount(titleaccount), balance(Balance) {};
	~BanksAccount() {};
};

int main() {

}