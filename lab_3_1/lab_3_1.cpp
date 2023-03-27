
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	
	float sum = 0, proizv = 1;
	//int k = 2, j = 1;	//счетчики
	
	for (int k = 2; k < 12; k++) {
		sum += 2 * k;
	}

	for (float k = 1; k < 10; k++) {
		proizv *= k + 1 / k;
	}
	
	cout << "Результат программы:" << sum + proizv << endl;


	return 0;
}
