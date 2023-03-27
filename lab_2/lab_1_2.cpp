//Задание 2. Разработать программу для решения поставленной задачи
//алгоритма линейного структуры.s
//Камень брошен с высоты h = 2, 1 м над поверхностью Земли под
//углом α = 45° к горизонту и упал на расстоянии S = 42 м от места бросания.
//Определить, сколько времени камень летел по расчетной формуле

#include <iostream>

using namespace std;

float lab_1_2() {
	const float h = 2.1;
	const float alpha = 45;
	const float s = 42;
	const float g = 9.8;
	float t = sqrt(2 * (h + s * tan(alpha)) / g);
	return t;
}
int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	cout << "Результат программы = " << lab_1_2() << endl;
}