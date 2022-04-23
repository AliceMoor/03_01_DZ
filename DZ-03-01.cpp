#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	cout << "DZ_03_01" << endl;
	int dz=0;
		
	cout << "" << endl;
	cout << "" << endl;
	while (dz < 4) {
		cout << "Введите № задания (1-3): "; cin >> dz;

		
		system("cls");

		switch (dz)
		{
		case 1: {
			cout << "Задание № 1." << endl;
			cout << "Пользователь вводит с клавиатуры расстояние до аэропорта и время, за которое нужно доехать." << endl;
			cout << "Вычислить скорость, с которой ему нужно ехать." << endl;

			double distance;
			double now_hour;
			double end_hour;
			double now_minutes;
			double end_minutes;
			double speed;
			double time;

			cout << "Введите расстояние до аэропорта - "; cin >> distance;
			cout << "Введите время выезда в 24-часовом формате:" <<endl;
			cout<< "час. - "; cin >> now_hour; 
			cout << "мин. - "; cin >> now_minutes; 

			cout << "Введите конечное время в 24-часовом формате:" << endl;
			cout << "час - "; cin >> end_hour; 
			cout << " мин. - "; cin >> end_minutes; 

			time = (end_hour * 60 + end_minutes) - (now_hour * 60 + now_minutes);
			
			speed = (distance*60) / time;

			cout << "Вам необходимо двигаться со скоростью "<<speed<<" км/час"<<endl;

			system("pause");
			system("cls");
		}
			break;
		case 2: {
			cout << "Задание № 2." << endl;
			cout << "Пользователь вводит с клавиатуры время начала и время завершения использования скутера (часы, минуты и секунды)." << endl;
			cout << "Посчитать стоимость поездки, если стоимость минуты - 2 рубля." << endl;

			double now_hour;
			double end_hour;
			double now_minutes;
			double end_minutes;
			double time;
			double money=2.23;
			int rub;
			int cop;
			double sum=0;

			cout << "Введите время начала поездки в 24-часовом формате:" << endl;
			cout << "час. - "; cin >> now_hour;
			cout << "мин. - "; cin >> now_minutes;

			cout << "Введите время завершения поездки в 24-часовом формате:" << endl;
			cout << "час - "; cin >> end_hour;
			cout << " мин. - "; cin >> end_minutes;

			time = (end_hour * 60 + end_minutes) - (now_hour * 60 + now_minutes);
			sum = time * money;

			rub = sum;
			cop = (sum - rub)*100; // выводит на одну копейку меньше. при изменении на типа double ругается
			cout << "Стоимость поездки " << rub << " руб." << cop << " коп." << endl;

			system("pause");
			system("cls");
		}
			break;
		case 3: {
			cout << "Задание № 3." << endl;
			cout << "Пользователь вводит с клавиатуры расстояние, расход бензина на 100 км и стоимость трех видов бензина." << endl;
			cout << "Вывести на экран сравнительную таблицу со стоимость поездки на разных видах бензина." << endl;

			double distance; //расстояние
			double gas; //расход
			double costAI98=61.85; //стоимость
			double costAI95=53.69;
			double costAI92=50.79;
			int rub;
			int cop;
			double sumAI98 = 0;
			double sumAI95 = 0;
			double sumAI92 = 0;

			cout << "Введите расстояние, км - "; cin >> distance;
			cout << "Введите расход бензина, л - "; cin >> gas;

			sumAI98 = (distance * costAI98);
			sumAI95 = (distance * costAI95);
			sumAI92 = (distance * costAI92);

			cout << "Стоимость поездки на разных видах бензина: " << endl;
			cout << "№ пп. " << "Вид бензина " << "Стоимость за ед. " << "Стоимость за " << distance << " км " << endl;
			cout << "   1. " << "  АИ-98     " << "\t" << costAI98 <<  "\t\t" << sumAI98  << endl;
			cout << "   2. " << "  АИ-95     " << "\t" << costAI95 <<  "\t\t" << sumAI95  << endl;
			cout << "   3. " << "  АИ-92     " << "\t" << costAI92 <<  "\t\t" << sumAI92  << endl;
			
			system("pause");
			system("cls");
		}
			break;
		default:
			break;
		}		
	}

	if (dz > 3) cerr << "\t\t\tОшибка выбора меню."<<endl;

	system("pause");
	system("cls");
	
	return 0;
}