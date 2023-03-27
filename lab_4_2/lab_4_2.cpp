//Задание 2. Разработать программу на языке С++ с использованием одномерных массивов.
//Размерности массивов следует задавать именованными константами[7, 8].
//Вариант 5. Переписать в одномерный массив C все элементы заданного целочисленного массива
//D[35], стоящие после его минимального элемента.
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>


using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const int n = 35;
	float D[n]{};
	float min{};
	int flag;
	vector <float> C;

	for (int i = 0; i < n; i++) {	//Заполнение массива случайными числами
		D[i] = rand() % 201 - 100;
	}

	cout << "Массив D выглядит вот так: " << endl;
	for (int i = 0; i < n; i++) {	
		cout << D[i] << '\t';
	}
	cout << endl;


	for (int i = 0; i < n; i++) {	//Поиск наименьшего элемента в массиве D
		if (D[i] < min) {
			min = D[i];
			flag = i+1;				//Позиция следующего элемента после наименьшего элемента в массиве
		}
	}
	cout << "Наименьший равен: " << min << endl;
	cout << "Позиция наименьшего элемента: " << flag << endl;

	for (flag; flag < n; flag++) {
		C.push_back(D[flag]);		//Запись в одномерный массив C всех элементов массива D, стоящих после минимального элемента

		}


	cout << "Массив C выглядит вот так: " << endl;
	for (int i = 0; i < C.size(); i++) {	//Вывод массива C в консоль
		cout << C[i] << '\t';
	}
	cout << endl;
	

		return 0;
	}
