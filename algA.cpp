#include <iostream>
using namespace std;

int main() {
	int numassigned;
	int sum = 0;
	int score;
	cout << "Welcome to Homework Sum!" << endl;
	cout << "How many homework assignments do you have: ";
	cin >> numassigned;

	for (int i = 1; i <= numassigned; i++) {
		cout << "Enter score " << i << ": ";
		cin >> score;
		sum += score;
	}

	cout << endl << "The sum of your homework scores is: " << sum << endl;

	if (sum < 150) {
		cout << "You Failed." << endl;
	}
	else {
		cout << "You Passed." << endl;
	}
    
}