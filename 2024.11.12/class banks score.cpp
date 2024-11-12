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

class DebetCard:public BanksAccount {
	int numberCard;
	string expirationDate;
	int cvcCode;
public:
	void SetNumberCard(int numbCard) { numberCard = numbCard; }
	int GetNumberCard() { return numberCard; }
	void SetExpirationDate(string expDate) { expirationDate = expDate; }
	string GetExpirationDate() { return expirationDate; }
	void SetCvcCode(int cvc) { cvcCode = cvc; }
	int GetCvcCode() { return cvcCode; }
	DebetCard(int numbCard = 0, string expDate = " ", int cvc = 0) :  numberCard(numbCard), expirationDate(expDate), cvcCode(cvc){};
	~DebetCard() {};
};


class CreditCard : public DebetCard {
	float creditLimit;
public:
	void SetCreditLimit(float creditlimit) { creditLimit = creditlimit; }
	float GetCreditLimit() { return creditLimit; }
	CreditCard(float creditlimit = 0.0) :creditLimit(creditlimit) {};
	~CreditCard() {};
};


int main() {

}