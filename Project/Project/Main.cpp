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
const int n = 87; //кол-во строк (i - переменная цикла)
const int m = 29; //кол-во столбцов (j - переменная цикла)

int main()
{
	//вывод времени(может в int):
	SYSTEMTIME t;	  //для времени
	GetLocalTime(&t); //для времени
	setlocale(LC_ALL, "Russian"); //поддержка Русского языка
	SetConsoleCP(1251);           //..
	SetConsoleOutputCP(1251);     //..
	int i, j; //переменные циклов

	ifstream fin("FileSourse.csv"); //открытие файла
	string gadgetString[n]; //массив строчек каждого устройства
	// int lengthString[n]{}; //массив с длинами строчек
	for (i = 0; i < n; i++)
	{
		getline(fin, gadgetString[i]); //читает строку
		//lengthString[i] = gadgetString[i].length(); //вычисляет кол-во символов в строке (мб и пригодится)
	}
	fin.close(); //закрытие файла

	//заполнение структуры:	
	gadget A[n];
	for (i = 0; i < n; i++) //нулевая строка это заголовки
	{
		j = 0;
		while (gadgetString[i][j] != ';')  A[i].number		 += gadgetString[i][j++]; j++; //01
		while (gadgetString[i][j] != ';')  A[i].type		 += gadgetString[i][j++]; j++; //02
		while (gadgetString[i][j] != ';')  A[i].model		 += gadgetString[i][j++]; j++; //03
		while (gadgetString[i][j] != ';')  A[i].place		 += gadgetString[i][j++]; j++; //04
		while (gadgetString[i][j] != ';')  A[i].oil			 += gadgetString[i][j++]; j++; //05
		while (gadgetString[i][j] != ';')  A[i].tools		 += gadgetString[i][j++]; j++; //06
		while (gadgetString[i][j] != ';')  A[i].password	 += gadgetString[i][j++]; j++; //07
		while (gadgetString[i][j] != ';')  A[i].qtAF		 += gadgetString[i][j++]; j++; //08
		while (gadgetString[i][j] != ';')  A[i].qtOF		 += gadgetString[i][j++]; j++; //09
		while (gadgetString[i][j] != ';')  A[i].qtOS		 += gadgetString[i][j++]; j++; //10
		while (gadgetString[i][j] != ';')  A[i].qtBelt		 += gadgetString[i][j++]; j++; //11
		while (gadgetString[i][j] != ';')  A[i].info		 += gadgetString[i][j++]; j++; //12
		while (gadgetString[i][j] != ';')  A[i].lastDateTO	 += gadgetString[i][j++]; j++; //13
		while (gadgetString[i][j] != ';')  A[i].lastHoursTO	 += gadgetString[i][j++]; j++; //14
		while (gadgetString[i][j] != ';')  A[i].owner		 += gadgetString[i][j++]; j++; //15
		while (gadgetString[i][j] != ';')  A[i].serialNumber += gadgetString[i][j++]; j++; //16
		while (gadgetString[i][j] != ';')  A[i].AF1			 += gadgetString[i][j++]; j++; //17
		while (gadgetString[i][j] != ';')  A[i].AF2			 += gadgetString[i][j++]; j++; //18
		while (gadgetString[i][j] != ';')  A[i].AF3			 += gadgetString[i][j++]; j++; //19
		while (gadgetString[i][j] != ';')  A[i].OF1			 += gadgetString[i][j++]; j++; //20
		while (gadgetString[i][j] != ';')  A[i].OF2			 += gadgetString[i][j++]; j++; //21
		while (gadgetString[i][j] != ';')  A[i].OF3			 += gadgetString[i][j++]; j++; //22
		while (gadgetString[i][j] != ';')  A[i].OS1			 += gadgetString[i][j++]; j++; //23
		while (gadgetString[i][j] != ';')  A[i].OS2			 += gadgetString[i][j++]; j++; //24
		while (gadgetString[i][j] != ';')  A[i].OS3			 += gadgetString[i][j++]; j++; //25
		while (gadgetString[i][j] != ';')  A[i].Belt1		 += gadgetString[i][j++]; j++; //26
		while (gadgetString[i][j] != ';')  A[i].Belt2		 += gadgetString[i][j++]; j++; //27
		while (gadgetString[i][j] != ';')  A[i].Belt3		 += gadgetString[i][j++]; j++; //28
										   A[i].SHD		     += gadgetString[i][j];        //29 
	}

	//опрос Что и Где: 
	int qWhat = 0;        //вопрос: Что?
	int qWhere = 0;       //вопрос: Где?
	string aWhat;         //ответ: Что?
	string aWhere;        //ответ: Где?
	int qWhereFirst = 0;  //уточнение первого
	int qWhereSecond = 0; //уточнение второго
	int qWhereThird = 0;  //уточнение третьего
	//цикл на выходе из которого имеем aWhat и уточнённый aWhere:
	qWhat = 17; //разрешение на опрос
	while (qWhat == 17)
	{
		cout << "Окей, летс го!" << endl;
		cout << "Что за устройство?" << endl;
		cout << "0 - Выход из программы" << endl;
		cout << "1 - Компрессор" << endl;
		cout << "2 - Воздуходувка" << endl;
		cout << "3 - Осушитель" << endl;
		cin >> qWhat;
		switch (qWhat)
		{
		case 0:
			exit(0); //выйти из программы
			break;
		case 1:
			aWhat = "КП";
			qWhere = 17; //разрешение на следущий цикл
			system("cls");
			break;
		case 2:
			aWhat = "ВД";
			qWhere = 17; //разрешение на следущий цикл
			system("cls");
			break;
		case 3:
			aWhat = "ОС";
			qWhere = 17; //разрешение на следущий цикл
			system("cls");
			break;
		default:
			qWhat = 17;
			system("cls");
			cout << "Введите число от 0 до 3!" << endl;
			break;
		}
		while (qWhere == 17)
		{
			cout << "Выбрано:'" << aWhat << "' " << endl;
			cout << "Где находится? (Пешая доступность)" << endl;
			cout << "0 - Назад" << endl;
			cout << "1 - 1-я, 2-я или 3-я очередь" << endl; //доп ветка
			cout << "2 - ДОФ" << endl;
			cout << "3 - Шихта" << endl;
			cout << "4 - Готовая продукция" << endl; //доп ветка
			cout << "5 - Перегрузка" << endl;
			cout << "6 - Пульпанасосная" << endl;
			cout << "7 - Сгущение" << endl; //доп ветка
			cout << "8 - Станция Комбинатская" << endl;
			cout << "9 - Перегрузка" << endl; 
			cin >> qWhere;
			switch (qWhere)
			{
			case 0:
				qWhat = 17;
				qWhere = 0;
				system("cls");
				break;
			case 1:
				qWhereFirst = 17;
				while (qWhereFirst == 17)
				{
					system("cls");
					cout << "Выбрано:'" << aWhat << "' " << endl;
					cout << "Можно поконкретнее? Пожалуйста :)" << endl;
					cout << "0 - Назад" << endl;
					cout << "1 - Обжиг" << endl;
					cout << "2 - Вторая" << endl;
					cout << "3 - Третья" << endl;
					cout << "4 - Минус 3" << endl;
					cin >> qWhereFirst;
					switch (qWhereFirst)
					{
					case 0:
						qWhere = 17;
						qWhereFirst = 0;
						system("cls");
						break;
					case 1:
						aWhere = "Обжиг";
						qWhereFirst = 0;
						qWhere = 0;
						break;
					case 2:
						aWhere = "2 очер.";
						qWhereFirst = 0;
						qWhere = 0;
						break;
					case 3:
						aWhere = "3 очер.";
						qWhereFirst = 0;
						qWhere = 0;
						break;
					case 4:
						aWhere = "-3 м";
						qWhereFirst = 0;
						qWhere = 0;
						break;
					default:
						qWhereFirst = 17;
						system("cls");
						break;
					}
				}				
				break;
			case 2:
				aWhere = "ДОФ";
				break;
			case 3:
				aWhere = "Шихта";
				break;
			case 4:
				qWhereSecond = 17;
				while (qWhereSecond == 17)
				{
					system("cls");
					cout << "Выбрано:'" << aWhat << "' " << endl;
					cout << "Какой бункер из двух?" << endl;
					cout << "0 - Назад" << endl;
					cout << "1 - Первый (Ближе)" << endl;
					cout << "2 - Второй (Дальше)" << endl;
					cin >> qWhereSecond;
					switch (qWhereSecond)
					{
					case 0:
						qWhere = 17;
						qWhereSecond = 0;
						system("cls");
						break;
					case 1:
						aWhere = "ГП 1";
						qWhereSecond = 0;
						qWhere = 0;
						break;
					case 2:
						aWhere = "ГП 2";
						qWhereSecond = 0;
						qWhere = 0;
						break;
					default:
						qWhereSecond = 17;
						system("cls");
						break;
					}
				}
				break;
			case 5:
				aWhere = "Перегр.";
				break;
			case 6:
				aWhere = "Пульп.";
				break;
			case 7:
				qWhereThird = 17;
				while (qWhereThird == 17)
				{
					system("cls");
					cout << "Выбрано:'" << aWhat << "' " << endl;
					cout << "Какое сгущение-то?" << endl;
					cout << "0 - Назад" << endl;
					cout << "1 - Ну то, что рядом с ДОФом" << endl;
					cout << "2 - Новое" << endl;
					cin >> qWhereThird;
					switch (qWhereThird)
					{
					case 0:
						qWhere = 17;
						qWhereThird = 0;
						system("cls");
						break;
					case 1:
						aWhere = "Сгущ.";
						qWhereThird = 0;
						qWhere = 0;
						break;
					case 2:
						aWhere = "Нов.сгущ.";
						qWhereThird = 0;
						qWhere = 0;
						break;
					default:
						qWhereThird = 17;
						system("cls");
						break;
					}
				}				
				break;
			case 8:
				aWhere = "Комб-ая";
				break;
			case 9:
				aWhere = "Перегр.";
				break;
			default:
				system("cls");
				qWhere = 17;
				cout << "Введите число от 0 до 9!" << endl;
				break;
			}
		}
		if (qWhat != 17) //вывод результатов опроса
		{
			system("cls");
			cout << "Выбрано:'" << aWhat << "' на '" << aWhere << "' " << endl;
		}
	}

	//формирование динамического массива с номерами гаджетов, подходящих описанию:
	int* chosenGadget = new int[n] {0}; // При объявлении сразу зануляем всю матрицу
	j = 0;
	for (i = 0; i < n; i++)
		if ((A[i].type== aWhat) && (A[i].place == aWhere))
		{
			chosenGadget[j] = stoi(A[i].number);
			j++;
		}
	int chosenGadgetN = j + 1; //сохраняем количество выбраных
	for (i = 0; i < j; i++) cout << chosenGadget[i] << endl; //проверка	
	cout << chosenGadgetN;

	//окончательный выбор редактируемого гаджета:
	cout << endl;
	for (i = 0; i < chosenGadgetN; i++)
	{
		cout << "Машина " << i + 1 << ":" << A[chosenGadget[i]].model << endl;
	}
	/*
	bool uncorrectAnswer;
	int lastChosenGadget;
	do
	{
		uncorrectAnswer = 0;
		cin >> lastChosenGadget;
		if (lastChosenGadget > i)
		{
			uncorrectAnswer = 1;
			cout << "Введите пожалуйста число от 1 до" << chosenGadgetN;
		}
	} while (uncorrectAnswer = 1);
	*/



	//опрос времени:
	/*
	int qWhen = 17;      //вопрос: Когда?
	int aWhen = 0;		 //ответ: Когда?
	int aWhenDay = 0;    //ответ: Когда?
	int aWhenMonth = 0;  //ответ: Когда?
	int aWhenYear = 0;   //ответ: Когда?
	while (qWhen == 17)
	{
		cout << "Когда сделано ТО?" << endl;
		//cout << "0 - Назад" << endl;
		cout << "1 - Сегодня" << endl;
		//cout << "2 - Вчера" << endl;	   //для реализации этой функции нужно будет написать календарь
		//cout << "3 - Позавчера" << endl; //..
		cout << "2 - Ввести дату" << endl; //доп ветка
		cin >> qWhen;
		switch (qWhen)
		{
		case 0:
			qWhen = 17; //Временное
			break;
		case 1:
			aWhenDay = t.wDay;
			aWhenMonth = t.wMonth;
			aWhenYear = t.wYear;
			//cout << t.wHour << endl;   //а ещё можно часы
			//cout << t.wMinute << endl; //а ещё можно минуты
			//cout << t.wSecond << endl; //а ещё можно секунды
			break;
		case 2:
			i = 1; 
			system("cls");
			while (i == 1)
			{
				cout << "Дата Тех. обслуживания(ДДММГГ):" << endl;
				cin >> aWhen;
				if (aWhen < 100000)
				{
					system("cls");
					cout << "Введите дату с левыми нулями, пожалуйста! \nНапример, так: 010722" << endl; //ошибка
				}
				else i = 0;
			}
			break;
		case 3:
			qWhen = 17; //Временное
			break;
		case 4:
			qWhen = 17; //Временное
			break;
		default:
			qWhen = 17; //Временное
			break;
		}
	}
	*/

	//вывод в файл:
	ofstream fWrite("FileOut.csv"); //объявим вывод в файл csv
	for (i = 0; i < n; i++)
	{
		fWrite << A[i].number		<< ";"; //01
		fWrite << A[i].model		<< ";"; //02
		fWrite << A[i].place		<< ";"; //03
		fWrite << A[i].oil			<< ";"; //04
		fWrite << A[i].tools		<< ";"; //05
		fWrite << A[i].password		<< ";"; //06
		fWrite << A[i].qtAF			<< ";"; //07
		fWrite << A[i].qtOF			<< ";"; //08
		fWrite << A[i].qtOS			<< ";"; //09
		fWrite << A[i].qtBelt		<< ";"; //10
		fWrite << A[i].info			<< ";"; //11
		fWrite << A[i].lastDateTO	<< ";"; //12
		fWrite << A[i].lastHoursTO	<< ";"; //13
		fWrite << A[i].owner		<< ";"; //14
		fWrite << A[i].serialNumber << ";"; //15
		fWrite << A[i].AF1			<< ";"; //16
		fWrite << A[i].AF2			<< ";"; //17
		fWrite << A[i].AF3			<< ";"; //18
		fWrite << A[i].OF1			<< ";"; //19
		fWrite << A[i].OF2			<< ";"; //20
		fWrite << A[i].OF3			<< ";"; //21
		fWrite << A[i].OS1			<< ";"; //22
		fWrite << A[i].OS2			<< ";"; //23
		fWrite << A[i].OS3			<< ";"; //24
		fWrite << A[i].Belt1		<< ";"; //25
		fWrite << A[i].Belt2		<< ";"; //26
		fWrite << A[i].Belt3		<< ";"; //27
		fWrite << A[i].SHD			<< ";"; //28
		fWrite << endl;
	}
	fWrite.close(); //закрытие файла
	
	/* выход из проги не работает:
	cout << "Конец программы. Для выхода нажмите Enter" << endl;
	char closeProgramm = getchar(); //выход с проги через Enter
	if (closeProgramm == '\n');		//..
	delete A; //деструктор
	*/

	return (0);
}