#include <iostream>

using namespace std;

float foo(float x,float y) {
	float result = 0;
	if (x*y < 1) result = x + y;
	else if (x*y >= 1) result = x - y;
	return result;
}
int main() {
	setlocale(LC_ALL, "Russian");
	float x = 0;
	float y = 0;
	cout << "Введите x для работы функции: " << endl;
	cin >> x;
	cout << "Введите y для работы функции: " << endl;
	cin >> y;
	cout << "Результат = " << foo(x, y) << endl;
}