#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

void main()
{
	SetConsoleOutputCP(1251);
	int A[10][8] = {};

	int xs,ys;
	cout<<"������� ���������� ����� ������� >";
	cin>>xs;
	if(xs>10)
	{
		cout<<"������: ���������� ����� �� ����� ���� ������ 10"<<endl;
	}
	else
	{
		int sum, int nm;
		cout<<"������� ���������� �������� ������� >";
		cin>>ys;
		if(ys>8)
		{
			cout<<"������: ���������� ����� �� ����� ���� ������ 8"<<endl;
		}
		else
		{
			for(int i=0;i<xs;i++)
			{
				cout<<"������� ������ "<<i<<" >";
				for(int j=0;j<ys;j++)
				{
					cin>>A[i][j];
					if(A[i][j]>=0)
					{
						sum+=A[i][j];
					}
					else
					{
						nm++;
					}
				}

				
			}
		}

		cout<<"��������� �������: "<<endl;
		for(int i=0;i<xs;i++)
		{
			for(int j=0;j<ys;j++)
			{
				cout<<A[i][j]<<" ";	
			}
			cout<<endl;
		}

		cout<<"������� ���������: ";
		for(int 

	}
}