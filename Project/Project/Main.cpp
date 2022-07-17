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
const int n = 87; //���-�� ����� (i - ���������� �����)
const int m = 29; //���-�� �������� (j - ���������� �����)

int main()
{
	//����� �������(����� � int):
	SYSTEMTIME t;	  //��� �������
	GetLocalTime(&t); //��� �������
	setlocale(LC_ALL, "Russian"); //��������� �������� �����
	SetConsoleCP(1251);           //..
	SetConsoleOutputCP(1251);     //..
	int i, j; //���������� ������

	ifstream fin("FileSourse.csv"); //�������� �����
	string gadgetString[n]; //������ ������� ������� ����������
	// int lengthString[n]{}; //������ � ������� �������
	for (i = 0; i < n; i++)
	{
		getline(fin, gadgetString[i]); //������ ������
		//lengthString[i] = gadgetString[i].length(); //��������� ���-�� �������� � ������ (�� � ����������)
	}
	fin.close(); //�������� �����

	//���������� ���������:	
	gadget A[n];
	for (i = 0; i < n; i++) //������� ������ ��� ���������
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

	//����� ��� � ���: 
	int qWhat = 0;        //������: ���?
	int qWhere = 0;       //������: ���?
	string aWhat;         //�����: ���?
	string aWhere;        //�����: ���?
	int qWhereFirst = 0;  //��������� �������
	int qWhereSecond = 0; //��������� �������
	int qWhereThird = 0;  //��������� ��������
	//���� �� ������ �� �������� ����� aWhat � ��������� aWhere:
	qWhat = 17; //���������� �� �����
	while (qWhat == 17)
	{
		cout << "����, ���� ��!" << endl;
		cout << "��� �� ����������?" << endl;
		cout << "0 - ����� �� ���������" << endl;
		cout << "1 - ����������" << endl;
		cout << "2 - ������������" << endl;
		cout << "3 - ���������" << endl;
		cin >> qWhat;
		switch (qWhat)
		{
		case 0:
			exit(0); //����� �� ���������
			break;
		case 1:
			aWhat = "��";
			qWhere = 17; //���������� �� �������� ����
			system("cls");
			break;
		case 2:
			aWhat = "��";
			qWhere = 17; //���������� �� �������� ����
			system("cls");
			break;
		case 3:
			aWhat = "��";
			qWhere = 17; //���������� �� �������� ����
			system("cls");
			break;
		default:
			qWhat = 17;
			system("cls");
			cout << "������� ����� �� 0 �� 3!" << endl;
			break;
		}
		while (qWhere == 17)
		{
			cout << "�������:'" << aWhat << "' " << endl;
			cout << "��� ���������? (����� �����������)" << endl;
			cout << "0 - �����" << endl;
			cout << "1 - 1-�, 2-� ��� 3-� �������" << endl; //��� �����
			cout << "2 - ���" << endl;
			cout << "3 - �����" << endl;
			cout << "4 - ������� ���������" << endl; //��� �����
			cout << "5 - ����������" << endl;
			cout << "6 - ��������������" << endl;
			cout << "7 - ��������" << endl; //��� �����
			cout << "8 - ������� ������������" << endl;
			cout << "9 - ����������" << endl; 
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
					cout << "�������:'" << aWhat << "' " << endl;
					cout << "����� ������������? ���������� :)" << endl;
					cout << "0 - �����" << endl;
					cout << "1 - �����" << endl;
					cout << "2 - ������" << endl;
					cout << "3 - ������" << endl;
					cout << "4 - ����� 3" << endl;
					cin >> qWhereFirst;
					switch (qWhereFirst)
					{
					case 0:
						qWhere = 17;
						qWhereFirst = 0;
						system("cls");
						break;
					case 1:
						aWhere = "�����";
						qWhereFirst = 0;
						qWhere = 0;
						break;
					case 2:
						aWhere = "2 ����.";
						qWhereFirst = 0;
						qWhere = 0;
						break;
					case 3:
						aWhere = "3 ����.";
						qWhereFirst = 0;
						qWhere = 0;
						break;
					case 4:
						aWhere = "-3 �";
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
				aWhere = "���";
				break;
			case 3:
				aWhere = "�����";
				break;
			case 4:
				qWhereSecond = 17;
				while (qWhereSecond == 17)
				{
					system("cls");
					cout << "�������:'" << aWhat << "' " << endl;
					cout << "����� ������ �� ����?" << endl;
					cout << "0 - �����" << endl;
					cout << "1 - ������ (�����)" << endl;
					cout << "2 - ������ (������)" << endl;
					cin >> qWhereSecond;
					switch (qWhereSecond)
					{
					case 0:
						qWhere = 17;
						qWhereSecond = 0;
						system("cls");
						break;
					case 1:
						aWhere = "�� 1";
						qWhereSecond = 0;
						qWhere = 0;
						break;
					case 2:
						aWhere = "�� 2";
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
				aWhere = "������.";
				break;
			case 6:
				aWhere = "�����.";
				break;
			case 7:
				qWhereThird = 17;
				while (qWhereThird == 17)
				{
					system("cls");
					cout << "�������:'" << aWhat << "' " << endl;
					cout << "����� ��������-��?" << endl;
					cout << "0 - �����" << endl;
					cout << "1 - �� ��, ��� ����� � �����" << endl;
					cout << "2 - �����" << endl;
					cin >> qWhereThird;
					switch (qWhereThird)
					{
					case 0:
						qWhere = 17;
						qWhereThird = 0;
						system("cls");
						break;
					case 1:
						aWhere = "����.";
						qWhereThird = 0;
						qWhere = 0;
						break;
					case 2:
						aWhere = "���.����.";
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
				aWhere = "����-��";
				break;
			case 9:
				aWhere = "������.";
				break;
			default:
				system("cls");
				qWhere = 17;
				cout << "������� ����� �� 0 �� 9!" << endl;
				break;
			}
		}
		if (qWhat != 17) //����� ����������� ������
		{
			system("cls");
			cout << "�������:'" << aWhat << "' �� '" << aWhere << "' " << endl;
		}
	}

	//������������ ������������� ������� � �������� ��������, ���������� ��������:
	int* chosenGadget = new int[n] {0}; // ��� ���������� ����� �������� ��� �������
	j = 0;
	for (i = 0; i < n; i++)
		if ((A[i].type== aWhat) && (A[i].place == aWhere))
		{
			chosenGadget[j] = stoi(A[i].number);
			j++;
		}
	int chosenGadgetN = j + 1; //��������� ���������� ��������
	for (i = 0; i < j; i++) cout << chosenGadget[i] << endl; //��������	
	cout << chosenGadgetN;

	//������������� ����� �������������� �������:
	cout << endl;
	for (i = 0; i < chosenGadgetN; i++)
	{
		cout << "������ " << i + 1 << ":" << A[chosenGadget[i]].model << endl;
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
			cout << "������� ���������� ����� �� 1 ��" << chosenGadgetN;
		}
	} while (uncorrectAnswer = 1);
	*/



	//����� �������:
	/*
	int qWhen = 17;      //������: �����?
	int aWhen = 0;		 //�����: �����?
	int aWhenDay = 0;    //�����: �����?
	int aWhenMonth = 0;  //�����: �����?
	int aWhenYear = 0;   //�����: �����?
	while (qWhen == 17)
	{
		cout << "����� ������� ��?" << endl;
		//cout << "0 - �����" << endl;
		cout << "1 - �������" << endl;
		//cout << "2 - �����" << endl;	   //��� ���������� ���� ������� ����� ����� �������� ���������
		//cout << "3 - ���������" << endl; //..
		cout << "2 - ������ ����" << endl; //��� �����
		cin >> qWhen;
		switch (qWhen)
		{
		case 0:
			qWhen = 17; //���������
			break;
		case 1:
			aWhenDay = t.wDay;
			aWhenMonth = t.wMonth;
			aWhenYear = t.wYear;
			//cout << t.wHour << endl;   //� ��� ����� ����
			//cout << t.wMinute << endl; //� ��� ����� ������
			//cout << t.wSecond << endl; //� ��� ����� �������
			break;
		case 2:
			i = 1; 
			system("cls");
			while (i == 1)
			{
				cout << "���� ���. ������������(������):" << endl;
				cin >> aWhen;
				if (aWhen < 100000)
				{
					system("cls");
					cout << "������� ���� � ������ ������, ����������! \n��������, ���: 010722" << endl; //������
				}
				else i = 0;
			}
			break;
		case 3:
			qWhen = 17; //���������
			break;
		case 4:
			qWhen = 17; //���������
			break;
		default:
			qWhen = 17; //���������
			break;
		}
	}
	*/

	//����� � ����:
	ofstream fWrite("FileOut.csv"); //������� ����� � ���� csv
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
	fWrite.close(); //�������� �����
	
	/* ����� �� ����� �� ��������:
	cout << "����� ���������. ��� ������ ������� Enter" << endl;
	char closeProgramm = getchar(); //����� � ����� ����� Enter
	if (closeProgramm == '\n');		//..
	delete A; //����������
	*/

	return (0);
}