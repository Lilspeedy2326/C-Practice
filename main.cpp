#include<iostream>
using namespace std;
int main() {
	char input1;
	char input2;

	cout << " Do you like ice cream? (Y)/(N)" << endl;
	cin >> input1;
	cout << "Do you like Nuts? (y)/(n)" << endl; \
	cin >> input2;

	if (input1 == 'Y') {
		if (input2 == 'y')
			cout << "YOU GET ROCKY ROAD ICE CREAM" << endl;
		else if (input2 == 'n')
			cout << "YOU GET VANILLA ICE CREAM" << endl;
	}
	else if (input1 == 'Y') {
		if (input2 == 'y')
			cout << "YOU GET A SNICKER BAR" << endl;
		else if (input2 == 'n')
			cout << "They get skittles" << endl;

	}
	else
		cout << "sorry, that's not an answer I understand." << endl;

			


}
