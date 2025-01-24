#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> vect;
	char ans;
	do {
		cout << "\nP - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - quit\n";
		cout << "\nChoose from the list: ";
		cin >> ans;
		if (ans == 'P' || ans == 'p') {
			if (vect.size() == 0) cout << "\n[] - The list is empty.";
			else {
				cout << "\n[";
				for (int i : vect) cout << i << " ";
				cout << "]";
			}

		}
		else if (ans == 'A' || ans == 'a') {
			int added;
			cout << "\nEnter the number: ";
			cin >> added;
			vect.push_back(added);
			cout << "\n" << added << " added";
		}
		else if (ans == 'M' || ans == 'm') {
			if (vect.size() == 0) cout << "\nThe list is empty.";
			else {
				int total = 0;
				for (int i : vect) total += i;
				int mean = total / vect.size();
				cout << "\nThe mean is: " << mean;
			}
		}
		else if (ans == 'S' || ans == 's') {
			if (vect.size() == 0) cout << "\n[] - The list is empty.";
			else {
				int min = vect.at(0);
				for (int i : vect) if (i < min) min = i;
				cout << "\nThe smallest value is: " << min;
			}
		}
		else if (ans == 'L' || ans == 'l') {
			if (vect.size() == 0) cout << "\n[] - The list is empty.";
			else {
				int max = vect.at(0);
				for (int i : vect) if (i > max) max = i;
				cout << "\nThe largest value is: " << max;
			}
		}
		else if (ans == 'Q' || ans == 'q') cout << "\nGoodbye...";
		else cout << "\nIllegal choice. Try again";
		cout << "\n--------------------------------------------\n";
	} while (ans != 'q' && ans != 'Q');
	return 0;
}