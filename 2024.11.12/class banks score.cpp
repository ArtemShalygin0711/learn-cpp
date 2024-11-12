#include <iostream>
#include <string>

using namespace std;

class BanksScore {
	int numberScore;
	string titleBank;
	string titleScore;
	float balance;
public:
	void SetNumberScore(int numbScore) { numberScore = numbScore; }
	int GetNumberScore() { return numberScore; }
	void SetTitleBank(string secondTitleBank) { titleBank = secondTitleBank; }
	string GetTitleBank() { return titleBank; }
	void SetTitleScore(string secondTitleScore) { titleScore = secondTitleScore; }
	string GetTitleScore() { return titleScore; }
	void SetBalance(int balanced) { balance = balanced; }
	float GetBalance() { return balance; }
	BanksScore() {};
	~BanksScore() {};
};