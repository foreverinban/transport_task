#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int tar[3][4];
	int zap[4];
	int ptr[3];
	int i, j, z;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			tar[i][j] = rand() % 10;
		}
	}
	// генерайция тарифов
	for (i = 0; i < 4; i++)
	{
		cout << "Вводите запасы" << endl;;
		cin >> zap[i];
	}
	// ввод запасов
	for (i = 0; i < 3; i++)
	{
		cout << "Введите потребности" << endl;;
		cin >> ptr[i];
	}
	// ввод потребностей

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout<<tar[i][j]<<' ';
		}
		cout << endl;
	}

	//северо-западный угол
	cout <<endl<< "Базовое решение" << endl;
	
}
