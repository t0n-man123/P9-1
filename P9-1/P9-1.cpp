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
		randomint[i] = 1000 + rand() % 9000;
		cout << randomint[i] << " ";
	}
}