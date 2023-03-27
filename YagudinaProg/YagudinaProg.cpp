//Вариант 5. Необходимо составить программу для вычисления гипотенузы прямоугольного треугольника,
//если известны его катеты. Результат работы программы вывести на экран.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	float a = 0, b = 0;
	cout << "Введите катеты треугольника, гипотенузу которого необходимо вычислить:" << endl;
	cin >> a;
	cin >> b;



	float result = sqrt(pow(a, 2) + pow(b, 2));
	cout << "Гипотенуза равна = " << result << endl;


	return 0;
}
