#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	cout << "DZ_03_01" << endl;
	int dz=0;
		
	cout << "" << endl;
	cout << "" << endl;
	while (dz < 4) {
		cout << "������� � ������� (1-3): "; cin >> dz;

		
		system("cls");

		switch (dz)
		{
		case 1: {
			cout << "������� � 1." << endl;
			cout << "������������ ������ � ���������� ���������� �� ��������� � �����, �� ������� ����� �������." << endl;
			cout << "��������� ��������, � ������� ��� ����� �����." << endl;

			double distance;
			double now_hour;
			double end_hour;
			double now_minutes;
			double end_minutes;
			double speed;
			double time;

			cout << "������� ���������� �� ��������� - "; cin >> distance;
			cout << "������� ����� ������ � 24-������� �������:" <<endl;
			cout<< "���. - "; cin >> now_hour; 
			cout << "���. - "; cin >> now_minutes; 

			cout << "������� �������� ����� � 24-������� �������:" << endl;
			cout << "��� - "; cin >> end_hour; 
			cout << " ���. - "; cin >> end_minutes; 

			time = (end_hour * 60 + end_minutes) - (now_hour * 60 + now_minutes);
			
			speed = (distance*60) / time;

			cout << "��� ���������� ��������� �� ��������� "<<speed<<" ��/���"<<endl;

			system("pause");
			system("cls");
		}
			break;
		case 2: {
			cout << "������� � 2." << endl;
			cout << "������������ ������ � ���������� ����� ������ � ����� ���������� ������������� ������� (����, ������ � �������)." << endl;
			cout << "��������� ��������� �������, ���� ��������� ������ - 2 �����." << endl;

			double now_hour;
			double end_hour;
			double now_minutes;
			double end_minutes;
			double time;
			double money=2.23;
			int rub;
			int cop;
			double sum=0;

			cout << "������� ����� ������ ������� � 24-������� �������:" << endl;
			cout << "���. - "; cin >> now_hour;
			cout << "���. - "; cin >> now_minutes;

			cout << "������� ����� ���������� ������� � 24-������� �������:" << endl;
			cout << "��� - "; cin >> end_hour;
			cout << " ���. - "; cin >> end_minutes;

			time = (end_hour * 60 + end_minutes) - (now_hour * 60 + now_minutes);
			sum = time * money;

			rub = sum;
			cop = (sum - rub)*100; // ������� �� ���� ������� ������. ��� ��������� �� ���� double ��������
			cout << "��������� ������� " << rub << " ���." << cop << " ���." << endl;

			system("pause");
			system("cls");
		}
			break;
		case 3: {
			cout << "������� � 3." << endl;
			cout << "������������ ������ � ���������� ����������, ������ ������� �� 100 �� � ��������� ���� ����� �������." << endl;
			cout << "������� �� ����� ������������� ������� �� ��������� ������� �� ������ ����� �������." << endl;

			double distance; //����������
			double gas; //������
			double costAI98=61.85; //���������
			double costAI95=53.69;
			double costAI92=50.79;
			int rub;
			int cop;
			double sumAI98 = 0;
			double sumAI95 = 0;
			double sumAI92 = 0;

			cout << "������� ����������, �� - "; cin >> distance;
			cout << "������� ������ �������, � - "; cin >> gas;

			sumAI98 = (distance * costAI98);
			sumAI95 = (distance * costAI95);
			sumAI92 = (distance * costAI92);

			cout << "��������� ������� �� ������ ����� �������: " << endl;
			cout << "� ��. " << "��� ������� " << "��������� �� ��. " << "��������� �� " << distance << " �� " << endl;
			cout << "   1. " << "  ��-98     " << "\t" << costAI98 <<  "\t\t" << sumAI98  << endl;
			cout << "   2. " << "  ��-95     " << "\t" << costAI95 <<  "\t\t" << sumAI95  << endl;
			cout << "   3. " << "  ��-92     " << "\t" << costAI92 <<  "\t\t" << sumAI92  << endl;
			
			system("pause");
			system("cls");
		}
			break;
		default:
			break;
		}		
	}

	if (dz > 3) cerr << "\t\t\t������ ������ ����."<<endl;

	system("pause");
	system("cls");
	
	return 0;
}