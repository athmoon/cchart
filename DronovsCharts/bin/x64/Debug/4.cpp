#include <iostream>
#include <Windows.h>

using namespace std;
int i;
long double eps, cEps; // eps - ����������, cEps - ������� �����������, i - ������� ����������
long double sum, element, x;//sum - ����������� �����, element - ��������� ����������� �������, x - �������� �������
//j - ������� ����� ��� �������� ����������
void main()
{
	SetConsoleOutputCP(1251);
	cout<<"������� ����������� ��������> ";
	cin>>eps;
	cout<<"������� � > ";
	cin>>x;
	i=0;
	cEps = eps+1;
	sum = 0;

	while(cEps>eps)
	{
		element = pow(-1, i) * pow(x, i+1);
		for(int j=1;j<i+1;j++)
		{
			element /= j;
		}
		i++;

		sum+=element;
		cEps = abs(element / sum);
	}

	cout<<"����������� ����� = "<<sum;

}