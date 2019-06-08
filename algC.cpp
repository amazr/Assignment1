#include <iostream>
#include <string>
using namespace std;

int main() {
	bool stop = false;
	int counter = 0;
	int sum = 0;
	int score;
	string checker;

	cout << "Welcome to Homework Sum!" << endl;

	while (!stop) {
		counter++;
		cout << "Enter score " << counter << ": ";
		cin >> score;
		sum += score;

		cout << "Do you have more scores to enter? ('y'/'n'): ";
		cin >> checker;

		if (checker == "n") {
			stop = true;
		}
		cout << endl;
	}

	cout << endl << "Homework point sum: " << sum << endl;

	if (sum < 150) {
		cout << "You failed." << endl;
	}
	else {
		cout << "You passed." << endl;
	}
	return 0;
}
