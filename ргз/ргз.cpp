﻿//Вариант 25. Протабулировать функцию у на заданном отрезке и записать в одномерный массив А все ненулевые ее значения до минимального, а в массив В – все ненулевые значения после минимального.
//y = 3cos5x + 2sinx[-π, π], h = π / 10.
//Упорядочить массив А по убыванию элементов.Из массивов А и В сфор - мировать двумерный массив U, размерность которого равна наименьшей из раз - мерностей массивов А и B, а элементы должны вычисляться по следующим пра - вилам:
//U[I][J] = А[I] + В[J], если I > J,
//U[I][J] = А[I] * B[I], если I < J,
//	U[I][J] = 1, если I = J.
//	В полученной матрице U подсчитать количество столбцов, среднее арифме - тическое которых меньше среднего арифметического всей матрицы U.Преобра - зовать элементы матрицы U в строку.
//	Вывести на печать все значения исходной функции на отрезке в виде табли - цы “Х Y”, массивы A и B в виде строк до и после изменения, матрицу U, все ис - комые результаты.


#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
const float Pi = 3.14;
float geralt(float x) {
	return 3 * cos(5 * x) + 2 * sin(x);

}





int main() {
	setlocale(LC_ALL, "Russian");
	float h = Pi / 10;
	float a=-Pi, b=Pi;
	float x = a;
	int k = 0;
	float min = 10000000;
	int min_k = 0;
	float M[20] = {};
	int i = 0;
	while (a <= x and x <= b) {
		M[i] = geralt(x);
		if (geralt(x) < min) {
			min = geralt(x);
			min_k = k;
		}
		x = x + h;
		k++;
		i++;
	}

	cout << "Массив M:\n";
	for (int i = 0; i < 20; i++) {
		cout<<i<<" " << M[i] << endl;
	}
	cout << endl;

	cout<< "количество: " << k << endl;
	cout << "минимальное: " << min << endl;
	cout << "номер минимального: " << min_k << endl;

	float A[100];
	float B[100];
	cout << "Массив A:\n";
	for (int i = 0; i < min_k; i++) {
		if (M[i] != 0) {
			A[i] = M[i];
			cout <<i<<" " << A[i] << endl;
		}
	}
	


	cout << "Массив B:\n";
	int j = 0;
	for (int i = min_k; i < sizeof(M) / sizeof(M[0]);i++) {
		if (M[i] != 0) {
			B[j] = M[i];
			j++;
			cout << B[j] << endl;
		}



	}




}