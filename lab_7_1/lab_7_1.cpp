//Необходимо написать программу, в которой пользователь вводит
//текст, а затем подсчитать количество открывающихся и закрывающихся скобок.А
//также вывести сообщение о нехватке той или иной скобки либо сообщение «порядок», если их поровну


#include <iostream>
#include <string>	//getline
using namespace std;


int main() {
	setlocale(LC_ALL, "rus");
	string txt;
	cout << "Введите текст: "; getline(cin, txt);

	int open = 0;
	int close = 0;

	// подсчет скобок
	for (int i = 0; i < size(txt); i++) {
		if (txt[i] == '(') open++;
		else if (txt[i] == ')') close++;
		cout << i << " " << txt[i] << '\n';
	}

	cout << "open : " << open << '\n';
	cout << "close : " << close << '\n';

	if (open > close) {
		cout << "Нехватка закрывающих скобок.\n";
	}
	else if (close < open) {
		cout << "Нехватка открывающих скобок.\n";
	}
	else {
		cout << "Порядок.\n";
	}

	return 0;
}