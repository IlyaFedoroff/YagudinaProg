//Задание 1.  Разработать программу на языке С++ с использованием одно-мерных массивов.
//Размерности массивов следует задавать именованными кон-стантами [7, 8].
//Вычислить процентное количество положительных элементов
//заданного вещественного массива EE[100].

#include <iostream>	//cout
#include <cstdlib>	//rand(), srand()
#include <ctime>	//time()

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	const int n = 100;	//Размер массива arr
	int arr[n]{}; //Пустой массив с n элементами
	srand(time(NULL));

	cout << "Исходный массив со случайными числами имеет вид:" << endl;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 1001 - 500;	//put random number [-500,500] in array arr
		cout << "arr[" << i << "] = " << arr[i] << '\n';	//Вывод в консоль исходного массива
	}
	cout << endl;

	float positive_numbers = 0;	//счетчик положительных чисел
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) positive_numbers += 1;
	}
	cout << "Количество положительных элементов массива: " << positive_numbers << endl;

	float result = (positive_numbers / n) * 100;

	cout << "Процентное количество положительных элементов заданного вещественного массива равно:" << result << endl;
	

	return 0;
}