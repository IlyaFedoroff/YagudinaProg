#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    float a = 0, b = 0, x = 0;
    float res = 0;
    cout << "Введите значение a" << endl;
    cin >> a;
    cout << "Введите значение b" << endl;
    cin >> b;
    cout << "Введите значение x" << endl;
    cin >> x;
    if (x = 1 and a > b) {
        res = a * cos(x);
    }
    if (x > 1 and a < b) {
        res = b * sin(x);
    }
    if (x < 1 and a > b) {
        res = 1;
    }

     cout << "Результат программы: " << res << endl;

    return 0;
}
