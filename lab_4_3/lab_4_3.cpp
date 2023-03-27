//Задание 3. Составить программу для решения поставленной задачи по ра-боте с одномерными массивами.
//Вывести исходный массив и преобразованный.
//Вариант 5. Необходимо заполнить одномерный массив случайными числами.
//После заполнения – сжать массив, удалив из него все элементы, модуль которых находится в интервале[a, b].Освободившиеся в конце массива элементы заполнить
//нулями

#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const int sizeOfArr = 100;
	int a = 0, b = 0;

	int* Arr = new int[sizeOfArr];

	for (int i = 0; i < sizeOfArr; i++) {	//Заполнение массива случайными числами
		Arr[i] = rand() % 201 - 100;		//[-100,100]
	}

	cout << "[";
	for (int i = 0; i < sizeOfArr; i++) {	//Вывод массива со псевдослучайными числами в диапазоне [-1000,1000]
		cout << Arr[i] << ", ";
	}
	cout << "]";
	cout << endl;

	cout << "Введите границы диапазона [a,b]: " << endl;
	cin >> a;
	cin >> b;

	for (int i = 0; i < sizeOfArr; i++) {
		
		if (abs(Arr[i]) > a and abs(Arr[i]) < b) Arr[i] = 0;


	}

	cout << "[";
	for (int i = 0; i < sizeOfArr-1; i++) {	//Вывод массива
		cout << Arr[i] << ", ";
	}
	cout << "]";
	cout << endl;



	return 0;
}
