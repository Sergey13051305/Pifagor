#include<iostream>
using namespace std;
#define TASK_1  //������� ���������
//#define TASK_2  //������� ��������
void main()
{
	setlocale(LC_ALL, "Rus");
			system("COLOR B4");
#if defined TASK_1
	cout << "\t\t\t\t\t\t������� ��������� " << endl << endl;
	int z = 1;
	for (int x = 2; x <= 9; x++)
	{
		for (int i = 2; i <= 9; i++)
		{
			z = i * x;
			cout << i << " * "<<x<< " = " << z << "\t";
		}		
			cout <<"\t" << endl;
	}
#endif TASK_1 //������� ���������

#if defined TASK_2
	{
		setlocale(LC_ALL, "Rus");
		cout << "\t\t\t������� ��������" << "\n\n" << "   ";
		int x = 2, z;
		while (x>=2 && x <= 9)
		{			
			if (x >= 4)             //��� �������� �� ������ �.� ���������� ��� ���������� �����
			{
				cout << " ";
			}
		cout <<"  "<<x;
		++x;
		cout << "    ";
		}
		for (int x = 2; x <= 9; x++)
		{
			cout << endl <<endl<< x;
			for (int i = 2; i <= 9; i++)
			{
				z = i * x;
				cout << "    "<<z<<"\t";
			}
			cout << "\t" << endl;
		}
	}
#endif TASK_2 //������� ��������
	
	
}