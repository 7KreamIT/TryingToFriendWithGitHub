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
const int m = 30; //���-�� �������� (j - ���������� �����)

int main()
{
	//����� �������(����� � int):
	SYSTEMTIME t;	  //��� �������
	GetLocalTime(&t); //��� �������
	setlocale(LC_ALL, "Russian"); //��������� �������� �����
	SetConsoleCP(1251);           //..
	SetConsoleOutputCP(1251);     //..
	int i, j; //���������� ������
	//moded
	//������ �������:
	ifstream fRead("�������.csv"); //�������� �����
	string* gadgetString = new string[n]; //������������ ������ ������� ������� ����������
	for (i = 0; i < n; i++) getline(fRead, gadgetString[i]); //������ ������
	fRead.close(); //�������� �����

	//���������� ���������:	
	gadget A[n];
	for (i = 0; i < n; i++) //������� ������ ��� ���������
	{
		j = 0;
		while (gadgetString[i][j] != ';')  A[i].location	 += gadgetString[i][j++]; j++; //01
		while (gadgetString[i][j] != ';')  A[i].number		 += gadgetString[i][j++]; j++; //02
		while (gadgetString[i][j] != ';')  A[i].type		 += gadgetString[i][j++]; j++; //03
		while (gadgetString[i][j] != ';')  A[i].model		 += gadgetString[i][j++]; j++; //04
		while (gadgetString[i][j] != ';')  A[i].place		 += gadgetString[i][j++]; j++; //05
		while (gadgetString[i][j] != ';')  A[i].oil			 += gadgetString[i][j++]; j++; //06
		while (gadgetString[i][j] != ';')  A[i].tools		 += gadgetString[i][j++]; j++; //07
		while (gadgetString[i][j] != ';')  A[i].password	 += gadgetString[i][j++]; j++; //08
		while (gadgetString[i][j] != ';')  A[i].qtAF		 += gadgetString[i][j++]; j++; //09
		while (gadgetString[i][j] != ';')  A[i].qtOF		 += gadgetString[i][j++]; j++; //10
		while (gadgetString[i][j] != ';')  A[i].qtOS		 += gadgetString[i][j++]; j++; //11
		while (gadgetString[i][j] != ';')  A[i].qtBelt		 += gadgetString[i][j++]; j++; //12
		while (gadgetString[i][j] != ';')  A[i].info		 += gadgetString[i][j++]; j++; //13
		while (gadgetString[i][j] != ';')  A[i].lastDateTO	 += gadgetString[i][j++]; j++; //14
		while (gadgetString[i][j] != ';')  A[i].lastHoursTO	 += gadgetString[i][j++]; j++; //15
		while (gadgetString[i][j] != ';')  A[i].owner		 += gadgetString[i][j++]; j++; //16
		while (gadgetString[i][j] != ';')  A[i].serialNumber += gadgetString[i][j++]; j++; //17
		while (gadgetString[i][j] != ';')  A[i].AF1			 += gadgetString[i][j++]; j++; //18
		while (gadgetString[i][j] != ';')  A[i].AF2			 += gadgetString[i][j++]; j++; //19
		while (gadgetString[i][j] != ';')  A[i].AF3			 += gadgetString[i][j++]; j++; //20
		while (gadgetString[i][j] != ';')  A[i].OF1			 += gadgetString[i][j++]; j++; //21
		while (gadgetString[i][j] != ';')  A[i].OF2			 += gadgetString[i][j++]; j++; //22
		while (gadgetString[i][j] != ';')  A[i].OF3			 += gadgetString[i][j++]; j++; //23
		while (gadgetString[i][j] != ';')  A[i].OS1			 += gadgetString[i][j++]; j++; //24
		while (gadgetString[i][j] != ';')  A[i].OS2			 += gadgetString[i][j++]; j++; //25
		while (gadgetString[i][j] != ';')  A[i].OS3			 += gadgetString[i][j++]; j++; //26
		while (gadgetString[i][j] != ';')  A[i].Belt1		 += gadgetString[i][j++]; j++; //27
		while (gadgetString[i][j] != ';')  A[i].Belt2		 += gadgetString[i][j++]; j++; //28
		while (gadgetString[i][j] != ';')  A[i].Belt3		 += gadgetString[i][j++]; j++; //29
										   A[i].SHD		     += gadgetString[i][j];        //30 
	}

	//����� ��� � ���: 
	int qWhat = 0;        //������: ���?
	int qWhere = 0;       //������: ���?
	int qWhereFirst = 0;  //������ ���������: ���?
	string aWhat;         //�����:  ���?
	string aWhere;        //�����:  ���?
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
				qWhereFirst = 17;
				while (qWhereFirst == 17)
				{
					system("cls");
					cout << "�������:'" << aWhat << "' " << endl;
					cout << "����� ������ �� ����?" << endl;
					cout << "0 - �����" << endl;
					cout << "1 - ������ (�����)" << endl;
					cout << "2 - ������ (������)" << endl;
					cin >> qWhereFirst;
					switch (qWhereFirst)
					{
					case 0:
						qWhere = 17;
						qWhereFirst = 0;
						system("cls");
						break;
					case 1:
						aWhere = "�� 1";
						qWhereFirst = 0;
						qWhere = 0;
						break;
					case 2:
						aWhere = "�� 2";
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
			case 5:
				aWhere = "������.";
				break;
			case 6:
				aWhere = "�����.";
				break;
			case 7:
				qWhereFirst = 17;
				while (qWhereFirst == 17)
				{
					system("cls");
					cout << "�������:'" << aWhat << "' " << endl;
					cout << "����� ��������-��?" << endl;
					cout << "0 - �����" << endl;
					cout << "1 - �� ��, ��� ����� � �����" << endl;
					cout << "2 - �����" << endl;
					cin >> qWhereFirst;
					switch (qWhereFirst)
					{
					case 0:
						qWhere = 17;
						qWhereFirst = 0;
						system("cls");
						break;
					case 1:
						aWhere = "����.";
						qWhereFirst = 0;
						qWhere = 0;
						break;
					case 2:
						aWhere = "���.����.";
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
			cout << "�������:'" << aWhat << "' �� '" << aWhere << "'" << endl;
		}
	}

	//������������ ������������� ������� � �������� ��������, ���������� ��������:
	int* chosenGadget = new int[n] {0}; // ��� ���������� ����� �������� ��� �������
	int chosenGadgetN = 0; //���������� ��������
	j = 0;
	for (i = 0; i < n; i++)
		if ((A[i].type == aWhat) && (A[i].place == aWhere))
		{
			chosenGadget[j] = stoi(A[i].number);
			j++;
			chosenGadgetN++;
		}

	//������������� ����� �������������� �������:
	bool uncorrectAnswer = 0; //�������� �����
	int lastChosenGadget;
	if (chosenGadgetN > 0) //���� ���� ���������� ������
	{
		cout << "������ ���������� ��� �������� �����:" << endl;
		for (i = 0; i < chosenGadgetN; i++) cout << i + 1 << ":" << A[chosenGadget[i]].model << endl;
		cout << "������� ����� ������ �� 1 �� " << chosenGadgetN << ":" << endl;
		do
		{
			uncorrectAnswer = 0;
			cin >> lastChosenGadget;
			if ((lastChosenGadget > chosenGadgetN) || (lastChosenGadget < 1))
			{
				uncorrectAnswer = 1;
				cout << "������� ���������� ����� �� 1 �� " << chosenGadgetN << endl;
			}
		} while (uncorrectAnswer == 1);
		lastChosenGadget = stoi(A[chosenGadget[lastChosenGadget - 1]].number); //������ ��� ���������� �������� ������� ��������� ������
		//cout << lastChosenGadget << endl; //��������
		//cout << A[lastChosenGadget].serialNumber << endl;
		system("cls");
		cout << "�������:'" << A[lastChosenGadget].type
			 << "' �� '" << A[lastChosenGadget].place
			 << "' ������ '" << A[lastChosenGadget].model
			 << "'" << endl;
	}
	else cout << "�����, ���������� ��� �������� �� ����������." << endl;
	
	//������� ����� ���� � ���������:
	int qWhen = 17;      //������: �����?
	int aWhen = 0;		 //�����:  �����?
	string aWhenString;  //�����: �����?
	while (qWhen == 17)
	{
		cout << "����� ������� ��?" << endl;
		//cout << "0 - �����" << endl;
		cout << "1 - �������" << endl;
		cout << "2 - ������ ����" << endl; //��� �����
		//cout << "2 - �����" << endl;	   //��� ���������� ���� ������� ����� ����� �������� ���������
		//cout << "3 - ���������" << endl; //..
		cin >> qWhen;
		switch (qWhen)
		{
		case 0:
			qWhen = 17; //���������
			break;
		case 1:
			//���������� ���� � ������� ������:
			if ((t.wDay < 10) && (t.wMonth < 10))   aWhenString = '0' + to_string(t.wDay) + '0' + to_string(t.wMonth) + to_string(t.wYear-2000);
			if ((t.wDay < 10) && (t.wMonth >= 10))  aWhenString = '0' + to_string(t.wDay) + to_string(t.wMonth) + to_string(t.wYear - 2000);
			if ((t.wDay >= 10) && (t.wMonth < 10))  aWhenString = to_string(t.wDay) + '0' + to_string(t.wMonth) + to_string(t.wYear - 2000);
			if ((t.wDay >= 10) && (t.wMonth >= 10)) aWhenString = to_string(t.wDay) + to_string(t.wMonth) + to_string(t.wYear - 2000);
			cout << aWhenString << endl;
			break;
		case 2:
			i = 1; 
			system("cls");
			while (i == 1)
			{
				cout << "���� ���. ������������(������):" << endl;
				cin >> aWhenString;
				if (aWhenString.length() != 6)
				{
					system("cls");
					cout << "������� ���� � ������ ������, ����������! \n��������, ���: 010700" << endl; //������
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

	//���� ��:
	unsigned long int aHowMuch;	//�����: ����� ���������?
	cout << "����� ��������� ����� ��?" << endl;
	cin >> aHowMuch;

	//������ ���������� ������ ��������� � �������:
	system("cls");
	cout << "��������� ������:'" << A[lastChosenGadget].type
		 << "' �� '" << A[lastChosenGadget].place
		 << "' ������ '" << A[lastChosenGadget].model
		 << "'" << endl;
	if (qWhen == 1) cout << "����������� ����: " << aWhenString;
	if (qWhen == 2) cout << "������� ���� ��:" << aWhenString;
	cout << endl << "������� ���������: " << aHowMuch;

	cout << endl << "�� ������� ��� ������ ������ ���������? (0-���, 1-��)";
	int ready;
	cin >> ready;
	cout << endl;
	switch (ready)
	{
	case 0:
		exit(0); //��������
		break;
	case 1:
		A[lastChosenGadget].lastDateTO = aWhenString;
		A[lastChosenGadget].lastHoursTO = to_string(aHowMuch);
		cout << "������ ������� �������!" << endl;
		break;
	default:
		exit(0); //��������
		break;
	}

	//����� � ����:
	ofstream fWrite("�������Out.csv"); //������� ����� � ���� csv
	for (i = 0; i < n; i++)
	{
		fWrite << A[i].location	    << ";"; //01
		fWrite << A[i].number		<< ";"; //02
		fWrite << A[i].type			<< ";"; //03
		fWrite << A[i].model		<< ";"; //04
		fWrite << A[i].place		<< ";"; //05
		fWrite << A[i].oil			<< ";"; //06
		fWrite << A[i].tools		<< ";"; //07
		fWrite << A[i].password		<< ";"; //08
		fWrite << A[i].qtAF			<< ";"; //09
		fWrite << A[i].qtOF			<< ";"; //10
		fWrite << A[i].qtOS			<< ";"; //11
		fWrite << A[i].qtBelt		<< ";"; //12
		fWrite << A[i].info			<< ";"; //13
		fWrite << A[i].lastDateTO	<< ";"; //14
		fWrite << A[i].lastHoursTO	<< ";"; //15
		fWrite << A[i].owner		<< ";"; //16
		fWrite << A[i].serialNumber << ";"; //17
		fWrite << A[i].AF1			<< ";"; //18
		fWrite << A[i].AF2			<< ";"; //19
		fWrite << A[i].AF3			<< ";"; //20
		fWrite << A[i].OF1			<< ";"; //21
		fWrite << A[i].OF2			<< ";"; //22
		fWrite << A[i].OF3			<< ";"; //23
		fWrite << A[i].OS1			<< ";"; //24
		fWrite << A[i].OS2			<< ";"; //25
		fWrite << A[i].OS3			<< ";"; //26
		fWrite << A[i].Belt1		<< ";"; //27
		fWrite << A[i].Belt2		<< ";"; //28
		fWrite << A[i].Belt3		<< ";"; //29
		fWrite << A[i].SHD			<< ";"; //30
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