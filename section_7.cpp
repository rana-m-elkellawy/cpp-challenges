#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> vector1{}, vector2{};
	vector1.push_back(10);
	vector1.push_back(20);
	cout << "Vector1: \n" << vector1.at(0) << " " << vector1.at(1);
	vector2.push_back(100);
	vector2.push_back(200);
	cout << "\n\nVector2: \n" << vector2.at(0) << " " << vector2.at(1);
	vector <vector<int>> vector3;
	vector3.push_back(vector1);
	vector3.push_back(vector2);
	cout << "\n\nVector3: \n" << vector3.at(0).at(0) << " " << vector3.at(0).at(1);
	cout<<"\n"<< vector3.at(1).at(0) << " " << vector3.at(1).at(1);
	return 0;
}