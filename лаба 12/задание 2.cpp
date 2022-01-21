/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int N;
	string C;
	cout << "Введите направление:";
	cin >> C;
	cout << "Введите направление:";
	cin >> N;
	if ((C == "С") and ( N== 0))
	{
		cout << "Робот продолжает движение на Север" << endl << endl;
	}
	if ((C == "Ю") and (N == 0))
	{
		cout << "Робот продолажет движение на Юг" << endl << endl;
	}
	if (( C == "З") and (N == 0))
	{
		cout << "Робот продолжает движение на Запад" << endl << endl;
	}
	if (( C == "В") and (N == 0))
	{
		cout << "Робот продолжает движение на Восток" << endl << endl;
	}
	if ((C == "С") and (N == 1))
	{
		cout << "Робот поворачивает налево на Север" << endl << endl;
	}
	if ((C == "Ю") and (N == 1))
	{
		cout << "Робот поворачивает налево на Юг" << endl << endl;
	}
	if ((C == "З") and (N == 1))
	{
		cout << "Робот поворачивает налево на Запад" << endl << endl;
	}
	if ((C == "В") and (N == 1))
	{
		cout << "Робот поворачивает налево на Восток" << endl << endl;
	}
	if ((C == "С") and (N == -1))
	{
		cout << "Робот поворачивает направо на Север" << endl << endl;
	}
	if ((C == "Ю") and (N == -1))
	{
		cout << "Робот поворачивает направо на Юг" << endl << endl;
	}
	if ((C == "З") and (N == -1))
	{
		cout << "Робот поворачивает направо на Запад" << endl << endl;
	}
	if ((C == "В") and (N == -1))
	{
		cout << "Робот поворачивает направо на Восток" << endl << endl;
	}
	return 0;
}

