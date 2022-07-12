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
const int m = 28; //���-�� �������� (j - ���������� �����)

int main()
{
	//����� �������(����� � int):
	SYSTEMTIME t;	  //��� �������
	GetLocalTime(&t); //��� �������
	setlocale(LC_ALL, "Russian"); //��������� �������� �����
	SetConsoleCP(1251);           //��������� �������� �����
	SetConsoleOutputCP(1251);     //��������� �������� �����
	int i, j; //���������� ������

	ifstream fin("FileSourse.csv"); //�������� �����
	string objectString[n]; //������ ������� ������� ����������
	// int lengthString[n]{}; //������ � ������� �������
	for (i = 0; i < n; i++)
	{
		getline(fin, objectString[i]); //������ ������
		//lengthString[i] = objectString[i].length(); //��������� ���-�� �������� � ������ (�� � ����������)
	}
	fin.close(); //�������� �����

	//���������� ���������:	
	object A[n];
	for (i = 0; i < n; i++) //������� ������ ��� ���������
	{
		j = 0;
		while (objectString[i][j] != ';')  A[i].number		 += objectString[i][j++]; j++; //01
		while (objectString[i][j] != ';')  A[i].model		 += objectString[i][j++]; j++; //02
		while (objectString[i][j] != ';')  A[i].place		 += objectString[i][j++]; j++; //03
		while (objectString[i][j] != ';')  A[i].oil			 += objectString[i][j++]; j++; //04
		while (objectString[i][j] != ';')  A[i].tools		 += objectString[i][j++]; j++; //05
		while (objectString[i][j] != ';')  A[i].password	 += objectString[i][j++]; j++; //06
		while (objectString[i][j] != ';')  A[i].qtAF		 += objectString[i][j++]; j++; //07
		while (objectString[i][j] != ';')  A[i].qtOF		 += objectString[i][j++]; j++; //08
		while (objectString[i][j] != ';')  A[i].qtOS		 += objectString[i][j++]; j++; //09
		while (objectString[i][j] != ';')  A[i].qtBelt		 += objectString[i][j++]; j++; //10
		while (objectString[i][j] != ';')  A[i].info		 += objectString[i][j++]; j++; //11
		while (objectString[i][j] != ';')  A[i].lastDateTO	 += objectString[i][j++]; j++; //12
		while (objectString[i][j] != ';')  A[i].lastHoursTO	 += objectString[i][j++]; j++; //13
		while (objectString[i][j] != ';')  A[i].owner		 += objectString[i][j++]; j++; //14
		while (objectString[i][j] != ';')  A[i].serialNumber += objectString[i][j++]; j++; //15
		while (objectString[i][j] != ';')  A[i].AF1			 += objectString[i][j++]; j++; //16
		while (objectString[i][j] != ';')  A[i].AF2			 += objectString[i][j++]; j++; //17
		while (objectString[i][j] != ';')  A[i].AF3			 += objectString[i][j++]; j++; //18
		while (objectString[i][j] != ';')  A[i].OF1			 += objectString[i][j++]; j++; //19
		while (objectString[i][j] != ';')  A[i].OF2			 += objectString[i][j++]; j++; //20
		while (objectString[i][j] != ';')  A[i].OF3			 += objectString[i][j++]; j++; //21
		while (objectString[i][j] != ';')  A[i].OS1			 += objectString[i][j++]; j++; //22
		while (objectString[i][j] != ';')  A[i].OS2			 += objectString[i][j++]; j++; //23
		while (objectString[i][j] != ';')  A[i].OS3			 += objectString[i][j++]; j++; //24
		while (objectString[i][j] != ';')  A[i].Belt1		 += objectString[i][j++]; j++; //25
		while (objectString[i][j] != ';')  A[i].Belt2		 += objectString[i][j++]; j++; //26
		while (objectString[i][j] != ';')  A[i].Belt3		 += objectString[i][j++]; j++; //27
										   A[i].SHD		     += objectString[i][j];        //28
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

	//����� �������:
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
		//cout << "2 - �����" << endl;		//��� ���������� ���� ������� ����� ����� �������� ���������� ��� ���������
		//cout << "3 - ���������" << endl;  //**
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
			while (i == 1)
			{
				system("cls");
				cout << "���� ���. ������������(������):" << endl;
				cin >> aWhen;
				if (aWhen < 100000)
				{
					cout << "������� ���� � ������ ������, ����������! \n ��������, ���: 010722";

				}
				else
				{
					cout << aWhen;
					i = 0;
				}
				//***�����***
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

	delete A; //����������
	return (0);
}