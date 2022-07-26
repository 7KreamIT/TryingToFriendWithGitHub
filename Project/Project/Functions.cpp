#include <iostream>      //для потока консоли
#include <fstream>       //для потока файла
#include <conio.h>       //для cout
#include <string>        //для работы со строками
#include <SDKDDKVer.h>   //для чтения файла
#include <stdio.h>       //для чтения файла
#include <tchar.h>       //для чтения файла
#include <Windows.h>     //для Русского языка
#include "Header.h"	     //мой заголовок
#include <ctime>		 //для вывода времени
using namespace std;

//приведение дат в формат ДДММГГ:
string dateToSixNumbers(int day, int month, int year)
{
	string date;
	if (year > 2000)
	{
		if ((day < 10) && (month < 10)) date = '0' + to_string(day) + '0' + to_string(month) + to_string(year - 2000);
		if ((day < 10) && (month >= 10)) date = '0' + to_string(day) + to_string(month) + to_string(year - 2000);
		if ((day >= 10) && (month < 10)) date = to_string(day) + '0' + to_string(month) + to_string(year - 2000);
		if ((day >= 10) && (month >= 10)) date = to_string(day) + to_string(month) + to_string(year - 2000);
	}
	else
	{
		if ((day <  10) && (month <  10)) date = '0' + to_string(day) + '0' + to_string(month) + to_string(year);
		if ((day <  10) && (month >= 10)) date = '0' + to_string(day) + to_string(month) + to_string(year);
		if ((day >= 10) && (month <  10)) date = to_string(day) + '0' + to_string(month) + to_string(year);
		if ((day >= 10) && (month >= 10)) date = to_string(day) + to_string(month) + to_string(year);
	}
	return date;
}