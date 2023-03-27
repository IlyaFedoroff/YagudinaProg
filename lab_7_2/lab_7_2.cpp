//5. Ввести строку с клавиатуры.Определить,
//является ли она палиндромом,
//то есть читается в прямом и обратном порядке одинаково.
//Вывести соответствующее сообщение

#include <iostream>
#include <string>


using namespace std;


int main() {
	setlocale(LC_ALL, "rus");

	string txt;
	bool flag = true;
	int len = 0;;
	cout << "Введите строку : "; getline(cin, txt);

	cout << "Длина строки равна " << size(txt) << '\n';

	len = size(txt)-1;
	for (int i = 0; i < size(txt)/2; i++) {
		cout << i << "  " << txt[i] << "  " << txt[len] << '\n';
		if (txt[i] != txt[len]) {
			cout << "Строка не является палиндромом.\n";
			flag = false;
			break;
		}
		len--;
	}

	if (flag == true) {
		cout << "Строка является палиндромом. Поздравляю!\n";
	}

	return 0;
}