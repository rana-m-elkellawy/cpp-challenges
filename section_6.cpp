#include <iostream>
using namespace std;

int main() {
	const int small{ 25 };
	const int large{ 35 };
	const float tax_rate{ .06 };
	const int estimate{ 30 };
	int num_small, num_large;
	cout << "Estimate for carpet cleaning service." << endl;
	cout << "Number of small rooms: ";
	cin >> num_small;
	cout << "Number of large rooms: ";
	cin >> num_large;
	cout << "\nPrice for smal rooms: " << small;
	cout << "\nPrice for large rooms: " << large;
	int cost = num_large * large + num_small * small;
	float tax = cost * tax_rate;
	cout << "\nCost: $" << cost;
	cout << "\nTax: $" << tax;
	cout << "\n-----------------------------------------";
	cout << "\nTotal estimate: $" << cost + tax;
	cout << "\nThis estimate is valid for " << estimate << " days.";
	return 0;
}