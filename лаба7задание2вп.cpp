﻿// лаба7задание2вп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c; //объявление переменных
	cout << "Введите a, b, c";
	cin >> a >> b >> c; //присваивание переменным значния
	if ((a < b) && (a < c) && (b < c)) { //проверка условий
		cout << "Истинно"; //вывод ответа
	}
	else {
		cout  << "Ложно";
	}
	return 0;
}
