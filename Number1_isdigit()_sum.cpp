#include <iostream>
#include <string>

using namespace std;

int main() {
	string number;
	int sum = 0;

	cout << "Enter the numbers as a string, no spaces, no quotations: ";
	cin >> number;
	cout << endl;

	for (char ch : number) {
		if (isdigit(ch)) {
			cout << ch << " ";
			sum += ch - '0';
		}
	}

	cout << "\nSum of all the character numbers: " << sum << endl;
}