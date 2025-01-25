#include <iostream>
using namespace std;

int main() {
	int cents;
	cout << "Enter an amount in cents: ";
	cin >> cents;
	int dollars = cents / 100;
	int quarters = (cents-100*dollars)/ 25;
	int dimes = (cents-100*dollars-25*quarters) / 10;
	int nickels = (cents-100*dollars-25*quarters-10*dimes) / 5;
	int pennies = (cents-100*dollars-25*quarters-10*dimes-5*nickels);
	cout << "\nDollars: " << dollars;
	cout << "\nQuarters: " << quarters;
	cout << "\nDimes: " << dimes;
	cout << "\nnickels: " << nickels;
	cout<< "\npennies: " << pennies;
}