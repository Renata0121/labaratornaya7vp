// лабазадание1вп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b;
	cout << "Введите a, b";
	cin >> a >> b;
	if ((a > 2) && (b <= 3)) {
		cout << "Истинно";
	}
	else {
		cout << "Ложно";
	}return 0;
}
