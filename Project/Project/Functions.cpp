#include <iostream>      //��� ������ �������
#include <fstream>       //��� ������ �����
#include <conio.h>       //��� cout
#include <string>        //��� ������ �� ��������
#include <SDKDDKVer.h>   //��� ������ �����
#include <stdio.h>       //��� ������ �����
#include <tchar.h>       //��� ������ �����
#include <Windows.h>     //��� �������� �����
#include "Header.h"	     //��� ���������
#include <ctime>		 //��� ������ �������
using namespace std;

//���������� ��� � ������ ������:
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