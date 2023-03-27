#include <iostream>
using namespace std;

int main() {
	const int n=10;
	double M[n] = { 1, 5, 65, 5.2, 54, 64,32, 67, 6, 9 };
	double max = M[0];
	for (int i = 0; i < n; i++) {
		if (M[i] > max) {
			max = M[i];

		}
	}
	cout << max;

}