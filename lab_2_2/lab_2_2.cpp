//Составить программу выбора страны для отдыха по введённой
//цифре(1 – Америка, 2 – Австрия, 3 – Греция, 4 – Белоруссия, 5 – Зимбабве, 6 –
//Кипр, 7 – Ирландия, 8 – Болгария, 9 – Германия, 10 – Китай).

#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "rus");

	int strana = 0;

	cout << "1 – Америка, 2 – Австрия, 3 – Греция, 4 – Беларусь, 5 – Зимбабве, 6 – Кипр, 7 – Ирландия, 8 – Болгария, 9 – Германия, 10 – Китай" << endl;
	cout << "Введите цифру для выбора страны для отдыха:" << endl;

	cin >> strana;

	switch (strana) {
	case 1:
		cout << "Америка\n";
		break;
	case 2:
		cout << "Австрия\n";
		break;
	case 3:
		cout << "Греция\n";
		break;
	case 4:
		cout << "Беларусь\n";
		break;
	case 5:
		cout << "Зимбабве\n";
		break;
	case 6:
		cout << "Кипр\n";
		break;
	case 7:
		cout << "Ирландия\n";
		break;
	case 8:
		cout << "Болгария\n";
	case 9:
		cout << "Германия\n";
	case 10:
		cout << "Китай\n";
	}


	return 0;
}