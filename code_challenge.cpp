// Get user input and check if positive integer
// While input is not 1, if even divide by 2, if odd multiply by 3 and add 1
// Print out the sequence of numbers

#include <iostream>
#include <list>

using namespace std;

int main() {
	bool go = true;
	unsigned long int input;
	list<int> sequence;
	
	while (go) {
		sequence.clear();
		cout << "Enter a positive integer (-1 to quit): ";
		cin >> input;
		if (input == -1) {
			go = false;
			break;
		}	

		while (input <= 0) {
			cout << "Invalid input. Enter a positive integer: ";
			cin >> input;
		}

		while (input != 1) {
			sequence.push_back(input);
			if (input % 2 == 0) {
				input /= 2;
			}
			else {
				input = input * 3 + 1;
			}
		}
		sequence.push_back(input);

		cout << "Sequence: ";
		for (auto entry : sequence) {
			cout << entry << " ";
		}
		cout << endl;
		cout << "Length: " << sequence.size() << endl;
	}
	
	return 0;
}