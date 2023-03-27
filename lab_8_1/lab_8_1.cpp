//Определить структуру music со следующими компонентами : название группы, стиль, год создания.
//Составить список из 10 музыкальных групп с заданным структурным типом.
//Вывести список в виде таблицы.Определить, количество групп одинакового стиля.
//Вывести список групп заданного года создания.Вывести список групп по году создания в порядке возрастания.


#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

struct  Music {
	int date{};	// Дата создания
	string name{};	// Навание группы
	string style{};	// Стиль
};

void bubbleSort(Music* list, int listLength)
{
	while (listLength--)
	{
		bool swapped = false;

		for (int i = 0; i < listLength; i++)
		{
			if (list[i].date > list[i + 1].date)
			{
				swap(list[i], list[i + 1]);
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
}

int music_style(Music* list, int size, string style) {
	// Определить, количество групп одинакового стиля.
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (list[i].style == style) {
			k++;
		}
	}
	return k;
}

void print_list(Music* list, int size, int date) {
	// Вывести список групп заданного года создания. Вывести список групп по году создания в порядке возрастания.
	Music* mass = new Music[size];

	int count = 0;

	cout << "Группы, год создания которых совпадает с  " << date << ": " << endl;
	for (int i = 0; i < size; i++) {
		if (list[i].date==date) {
			mass[count] = list[i];
			count++;
			//cout << list[i].name << endl;
		}
	}

	bubbleSort(mass, count);

	for (int i = 0; i < count; i++) {
		cout << mass[i].name << "  " << mass[i].date << '\n';
	}
}

int main() {
	setlocale(LC_ALL, "rus");

	Music music_1, music_2, music_3, music_4, music_5, music_6, music_7, music_8, music_9, music_10;

	// Music 1
	music_1.date = 1981;
	music_1.name = "Metallica";
	music_1.style = "MEtall";

	// Music 2
	music_2.date = 1973;
	music_2.name = "AC/DC";
	music_2.style = "Rock";

	// Music 3
	music_3.date = 1970;
	music_3.name = "Queen";
	music_3.style = "MEtall";

	// Music 4
	music_4.date = 1972;
	music_4.name = "ABBA";
	music_4.style = "POP-music";

	// Music 5
	music_5.date = 1968;
	music_5.name = "Deep Purple";
	music_5.style = "Rock";

	// Music 6
	music_6.date = 1978;
	music_6.name = "Duran Duran";
	music_6.style = "Rock";

	// Music 7
	music_7.date = 1994;
	music_7.name = "Nirvana";
	music_7.style = "Rock";

	// Music 8
	music_8.date = 1965;
	music_8.name = "Pink Floyd";
	music_8.style = "Rock";

	// Music 9
	music_9.date = 1983;
	music_9.name = "Bon Jovi";
	music_9.style = "Rock";

	// Music 10
	music_10.date = 1976;
	music_10.name = "U2";
	music_10.style = "Rock";

	// Список групп
	Music list[] = { music_1, music_2, music_3, music_4,music_5,music_6,music_7,music_8,music_9,music_10 };

	// шапка
	cout << setw(30) << "|-------------------------------------------------|" << endl;
	cout << "| " << setw(5) << "Номер" << " |" << setw(20) << "Название" << " |" << setw(6) << "Дата" << " |" << setw(10) << "Стиль" << " |" << endl;
	cout << setw(30) << "|-------------------------------------------------|" << endl;
	// заполнение таблицы
	for (int i = 0; i < size(list); i++) {
		cout << "| " << setw(5) << i + 1 << " |" << setw(20) << list[i].name << " |" << setw(6) << list[i].date << " |" << setw(10) << list[i].style << " |" << endl;
		cout << "|" << setw(45) << "-------------------------------------------------|" << endl;
	}

	cout << "Определить, количество групп одинакового стиля.: " << '\n' << music_style(list, size(list), "Rock") << endl;
	print_list(list, size(list), 1981);


	return 0;
}