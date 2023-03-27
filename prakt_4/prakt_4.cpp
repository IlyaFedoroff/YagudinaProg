#include <iostream>

using namespace std;

void foo() {

	float x_nach, x_konec, dx, a, b, c;
	cout << "Введите X нач. : \n";
	cin >> x_nach;
	cout << "Введите X кон. : \n";
	cin >> x_konec;
	cout << "Введите dx : \n";
	cin >> dx;
	cout << "Введите a : \n";
	cin >> a;
	cout << "Введите b : \n";
	cin >> b;
	cout << "Введите c : \n";
	cin >> c;
	float x = x_nach;
	float result = 0;

	cout << "Таблица значений функции с шагом " << dx << ":" << endl;

	while (x < x_konec) {

		if (x < 0 and b != 0) cout << a - x / (10 + b) << '\t';
		else if (x > 0 and b == 0) cout << (x - a) / (x - c) << '\t';
		else cout << 3 * x + 2 / c << '\t';
		x = x + dx;
	}
}

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	foo();
}