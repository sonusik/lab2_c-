// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<chrono>
#include<thread>
#include<mutex>
#include<vector>
#include<conio.h>
#include<cmath>
using namespace std;

mutex mut;




void Metod3()
{

	for (int i = 0; i < 5; i++) //4 поток
	{

		cout << endl << "\t|id потока |  " << "N(100000) =" << this_thread::get_id() << "\t4" << " | " << endl;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}

void Metod2()
{
	for (int i = 0; i < 5; i++) //3 поток
	{
		cout << endl << "\t|id потока |  " << "N(1000) =" << this_thread::get_id() << "\t3" << " | " << endl;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}
void Metod1()
{
	for (int i = 0; i < 5; i++) //2 поток
	{
		cout << endl << "\t|id потока |  " << "N(100) =" << this_thread::get_id() << "\t2" << " | " << endl;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}
void Metod()
{
	for (int i = 0; i < 5; i++) //1 поток
	{
		cout << endl << "\t|id потока |  " << "N(10) =" << this_thread::get_id() << "\t1" << " | " << endl; // -индификатор потока
		this_thread::sleep_for(chrono::milliseconds(100));
	}

}

int main()
{
	setlocale(LC_ALL, "ru");
	double i = 0;

	/*
	const int N = 5;
	const int Z = N;
	int a[N];
	float b[Z];
	for (int i = 0; i < size(a); i++)
	{
		cin >> a[i];
		b[i] = pow(a[i], 1.789);
	}
	cout << "\n";
	for (int i = 0; i < size(b); i++)
	{
		cout << b[i] << "\n";
	} */
	thread th(Metod);
	th.join();
	thread th1(Metod1);
	th1.join();
	thread th2(Metod2);
	th2.join();
	thread th3(Metod3);
	th3.join();

	_getch();

	return 0;
}

