#include <iostream>
#include <string>
using namespace std;

int main()
{
	string alpha{ "^ qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM" },
		key{ " ^MNBVCXZLKJHGFDSAPOIUYTREWQmnbvcxzlkjhgfdsapoiuytrewq" };
	string original_message, encryp, decryp;
	cout << "Enter your message: ";
	getline(cin, original_message);
	encryp = original_message;
	for (size_t i = 0; i < original_message.size(); i++) {
		for (size_t n = 0; n < alpha.size(); n++)
			if (original_message.at(i) == alpha.at(n)) {
				encryp.at(i) = key.at(n);
				break;
			}
	}
	cout << "\nThe encrypted message is " << encryp << endl;
	decryp = encryp;
	for (size_t i = 0; i < encryp.size(); i++) {
		for (size_t n = 0; n < key.size(); n++)
			if (encryp.at(i) == key.at(n)) {
				decryp.at(i) = alpha.at(n);
				break;
			}
	}
	cout << "\nThe decrypted message is: " << decryp << endl;
	return 0;
}