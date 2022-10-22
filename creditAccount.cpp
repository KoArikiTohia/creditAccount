#include <iostream>

using namespace std;

int main () {

	double accountBal = 0.0;
	double totalAmountDue = 0.0;
	double interestRate1 = 0.15;
	double minimunAmountDue = 0.0;
	double semiFinalAmount = 0.0;
	char playAgain = ' ';

	do { 

	cout << "Please enter your Account Balance\n" << endl;
	cin >> accountBal;
	cout << endl;

	if (accountBal >= 10 && accountBal <= 1000) {
		semiFinalAmount = (accountBal * interestRate1);
		totalAmountDue = (semiFinalAmount + accountBal);
	}
		if (accountBal >= 10 && accountBal >= 1000) {
			semiFinalAmount = (accountBal * 0.25);
			totalAmountDue = (semiFinalAmount + accountBal);
	 }

	if (totalAmountDue <= 10) {
		 minimunAmountDue = totalAmountDue;

	}
	 else {
		 minimunAmountDue = (totalAmountDue * 0.10);
	 }

		cout << "Your Total Amount due is \n" << totalAmountDue << endl;
		cout << "\nYour Minimum payment amount is " << minimunAmountDue << endl;

		cout << "\nWould you like to play again? (Y/N?) \n" << endl;
		cin >> playAgain;

	} while (playAgain == 'y' || playAgain == 'Y');
	 
	
	return 0;
}