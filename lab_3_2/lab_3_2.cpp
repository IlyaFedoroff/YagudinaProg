//Задание 2. Составить программу для вычисления значения выражения с помощью операторов цикла.
//Вычислить среднее арифметическое значений функции
//Y = 5sin(x– 5) на отрезке[-5; 3] c шагом 0.25, которые по
//величине больше половины максимума функции

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	float x = -5;
	float sum = 0;
	float max = 0;
	float flag = 0;
	float result=0;
	const float end = 3;
	const float dx = 0.25;
	unsigned int n = 0;

	while (x < end) {
		float y = 5 * sin(x - 5);
		if (y / 2 > max) {
			max = y;		//поиск максимального значения(половины)
			flag = x;		//расположение максимума
		}

		x += dx;
	}
	for (flag; flag < end; flag += dx) {					//Подсчет суммы и количества значенй функции 
		float y = 5 * sin(x - 5);							//начиная с нужной позиции максимального значения
		sum += y;
		n += 1;
	}

	cout << "Результат программы: " << sum / n << endl;

	return 0;
}

