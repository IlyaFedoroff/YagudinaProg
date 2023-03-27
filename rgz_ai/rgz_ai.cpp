#include <iostream>
#include <cmath>
#include <algorithm> //для сортировки массива
using namespace std;

int main() {
	system("cls");
	double M_PI = 3.14;
	double a = -M_PI, b = M_PI, h = M_PI / 10;
	//int n = (b - a) / h + 1;
	const int n = 20;


	double y[n]; //массив значений функции на отрезке
	for (int i = 0; i < n; i++) {
		double x = a + i * h;
		y[i] = 3 * cos(5 * x) + 2 * sin(x);
		cout << y[i] << endl;
	}

	double A[n], B[n]; //массивы для записи ненулевых значений
	int ai = 0, bi = 0; //индексы для массивов A и B

	double minY = y[0]; //минимальное значение функции
	int minIndex = 0; //индекс минимального значения
	for (int i = 0; i < n; i++) {
		if (y[i] < minY) {
			minY = y[i];
			minIndex = i;
		}
	}

	for (int i = 0; i < n; i++) {	// заносим в массив A и B значения
		if (y[i] != 0) {
			if (i <= minIndex) {
				A[ai] = y[i];
				ai++;
			}
			else if (i > minIndex) {
				B[bi] = y[i];
				bi++;
			}
		}
	}

	cout << "INDEX_MIN: " << minIndex << endl;
	cout << "Mass A: " << endl;
	for (int i = 0; i < ai; i++) {
		cout << A[i] << endl;
	}
	cout << "Mass B: " << endl;
	for (int i = 0; i < bi; i++) {
		cout << B[i] << endl;
	}
	







	//sort(A, A + ai, greater<double>()); //сортировка массива A по убыванию

	int uSize = min(ai, bi); //размер массива для создания двумерной матрицы U
	cout << uSize << endl;
	//double U[uSize][uSize]; //двумерная матрица U
	//for (int i = 0; i < uSize; i++) {
	//    for (int j = 0; j < uSize; j++) {
	//        if (i > j) {
	//            U[i][j] = A[i] + B[j];
	//        }
	//        else if (i < j) {
	//            U[i][j] = A[i] * B[j];
	//        }
	//        else {
	//            U[i][j] = 1;
	//        }
	//    }
	//}

	//double uSum = 0; //сумма всех элементов матрицы U
	//int uCount = 0; //количество элементов матрицы U
	//double uColumnSum[uSize] = {}; //массив для хранения сумм значений столбцов матрицы U
	//int uColumnCount[uSize] = {}; //массив для хранения количества значений в столбцах матрицы U
	//for (int i = 0; i < uSize; i++) {
	//    for (int j = 0; j < uSize; j++) {
	//        uSum += U[i][j];
	//        uCount++;
	//        uColumnSum[j] += U[i][j];
	//        uColumnCount[j]++;
	//    }
	//}

	//double uAverage = uSum / uCount; //среднее значение всех элементов матрицы U
	//int uColumnLessCount = 0; //количество столбцов, у которых среднее значение меньше среднего значения всей матрицы
	//for (int i = 0; i < uSize; i++) {
	//    double uColumnAverage = uColumnSum[i] / uColumnCount[i];
	//    if (uColumnAverage < uAverage) uColumnLessCount++;
	//}

	//string uString = ""; //строка для записи элементов матрицы U
	//for (int i = 0; i < uSize; i++) {
	//    for (int j = 0; j < uSize; j++) {
	//        uString += to_string(U[i][j]) + " ";
	//    }
	//}

	//cout << "X\tY\n";
	//for (int i = 0; i < n; i++) {
	//    printf("%.3f\t%.3f\n", a + i * h, y[i]);
	//}
	//cout << "\nA: ";
	//for (int i = 0; i < ai; i++) {
	//    cout << A[i] << " ";
	//}
	//cout << "\nB: ";
	//for (int i = 0; i < bi; i++) {
	//    cout << B[i] << " ";
	//}
	//cout << "\n\nU:\n";
	//for (int i = 0; i < uSize; i++) {
	//    for (int j = 0; j < uSize; j++) {
	//        cout << U[i][j] << "\t";
	//    }
	//    cout << "\n";
	//}
	//cout << "\nКоличество столбцов, у которых среднее значение меньше среднего значения всей матрицы: " << uColumnLessCount << "\n";
	//cout << "\nЭлементы матрицы U в строке: " << uString << "\n";
	
	return 0;
}