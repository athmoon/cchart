#include <Windows.h>
#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	SetConsoleOutputCP(1251);
	int a=0;
	cout<<"������� a> ";
	cin>>a;

	switch (a)
	{
	case 1:
		cout<<"����";
		break;
	case 2:
		cout<<"���";
		break;
	case 3:
		cout<<"���";
		break;
	case 4:
		cout<<"������";
		break;
	case 5:
		cout<<"����";
		break;
	default:
		cout<<"����������� ��������";
		break;
	}

	cout<<endl;
}