#include <iostream>

using namespace std;

void print(int* arr, int size);
int* apply_all(int* arr1, int size1, int* arr2, int size2);

int main() {
	int arr1[]{ 1,2,3,4,5 },
		arr2[]{ 10,20,30 };
	cout << "array 1: ";
	print(arr1, 5);

	cout << "\narray 2: ";
	print(arr2, 3);

	int* arr3 = nullptr;
	arr3 = apply_all(arr1, 5, arr2, 3);
	cout << "\nresult: ";
	print(arr3, 15);


	return 0;
}

void print(int* arr, int size) {
	cout << "[ ";
	for (int i = 0; i < size;i++) cout << *(arr+i) << " ";
	cout << "]";
}

int* apply_all(int* arr1, int size1, int* arr2, int size2) {
	int* arr3 = nullptr;
	arr3 = new int[size1 * size2];
	int size3 = 0;
	for (int i = 0; i < size1; i++) {
		for (int n = 0; n < size2; n++) {
			arr3[size3++] = arr1[i] * arr2[n];
		}
	}
	return arr3;
}
