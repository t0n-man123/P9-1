#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Atherton BUnner; hip, hip, array!

int main() {
	srand(time(0));
	const int ARRAYSIZE = 10;
	int randomint[ARRAYSIZE];
	// first bullet point
	cout << "The random integers: ";
	for (int i = 0; i < ARRAYSIZE; i++) {
		randomint[i] = 1000 + rand() % 9000; // makes 4 digit random number
		cout << randomint[i] << " ";
	}
	// second bullet point
	cout << endl << "Even indices:	     ";
	for (int j = 0; j < ARRAYSIZE; j = j + 2) { // makes the even numbers appear
		cout << randomint[j] << " ";
	}
	// third bullet point
	cout << endl << "Even values:         ";
	for (int k = 0; k < ARRAYSIZE; k++) {
		if (randomint[k] % 2 == 0) { // checks if even and outputs number if true
			cout << randomint[k] << " ";
		}
	}
}