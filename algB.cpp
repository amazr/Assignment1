#include <iostream>
using namespace std;

int main() {

	bool stop = false;
	int counter = 0;
	int sum = 0;
	int score;

	cout << "Welcome to Homework Sum!" << endl;
	cout << "Enter homework scores below. When you are finished, enter '-1'" << endl;
	
	while (!stop) {
		counter++;
		cout << "Enter score " << counter << ": ";
		cin >> score;
		if (score == -1) {
			stop = true;
		}
		else {
			sum += score;
		}
	}

	cout << endl << "Homework point sum: " << sum << endl;
	
	if (sum < 150) {
		cout << "You Failed." << endl;
	}
	else {
		cout << "You Passed." << endl;
	}
	return 0;

}
