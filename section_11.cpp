#include <iostream>
#include <vector>
using namespace std;

void show_menu();
char answer();
void print_numbers(const vector <int> vect);
void add_number(vector<int>& vect);
void mean(const vector<int> vect);
void smallest(const vector<int> vect);
void largest(const vector<int> vect);
void loop(vector<int> vect);

int main()
{
	vector <int> vect;
	loop(vect);
	return 0;
}

void show_menu() {
	cout << "\nP - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - quit\n";
	cout << "\nChoose from the list: ";
}

char answer() {
	char ans;
	cin >> ans;
	return toupper(ans);
}

void print_numbers(const vector <int> vect) {
	if (vect.size() == 0) cout << "\n[] - The list is empty.";
	else {
		cout << "\n[";
		for (int i : vect) cout << i << " ";
		cout << "]";
	}
}

void add_number(vector<int>& vect) {
	int added;
	cout << "\nEnter the number: ";
	cin >> added;
	vect.push_back(added);
	cout << "\n" << added << " added";
}

void mean(const vector<int> vect) {
	if (vect.size() == 0) cout << "\nThe list is empty.";
	else {
		int total = 0;
		for (int i : vect) total += i;
		int mean = total / vect.size();
		cout << "\nThe mean is: " << mean;
	}
}

void smallest(const vector<int> vect) {
	if (vect.size() == 0) cout << "\n[] - The list is empty.";
	else {
		int min = vect.at(0);
		for (int i : vect) if (i < min) min = i;
		cout << "\nThe smallest value is: " << min;
	}
}

void largest(const vector<int> vect) {
	if (vect.size() == 0) cout << "\n[] - The list is empty.";
	else {
		int max = vect.at(0);
		for (int i : vect) if (i > max) max = i;
		cout << "\nThe largest value is: " << max;
	}
}

void loop(vector<int> vect) {
	char ans;
	do {
		show_menu();
		ans = answer();
		if (ans == 'P') {
			print_numbers(vect);
		}
		else if (ans == 'A') {
			add_number(vect);
		}
		else if (ans == 'M') {
			mean(vect);
		}
		else if (ans == 'S') {
			smallest(vect);
		}
		else if (ans == 'L') {
			largest(vect);
		}
		else if (ans == 'Q') cout << "\nGoodbye...";
		else cout << "\nIllegal choice. Try again";
		cout << "\n---------------------------------------\n";
	} while (ans != 'q' && ans != 'Q');
}