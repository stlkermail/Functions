// В проекте 'Arrays' вычислить сумму элементов массива, среднее арифметическое элементов массива, найти в массиве максимальный элемент и минимальноый элемент.
#include <iostream>

using std::endl;
using std::cout;
using std::cin;
//#define SUM
//#define AVERAGE
//#define MIN_MAX
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
#ifdef SUM
	const int n = 5;
	int arr[n] = {};
	int x = 0;
	//arr[2] = 123; 
	//cout << arr[2] << endl; 
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	for (int i = 0; i < n; i++)
	{
		x += arr[i];
	}
	cout << "\n";
	cout << "Сумма элементов массива: " << x << "\n";
#endif // SUM

#ifdef AVERAGE
	const int n = 5;
	int arr[n] = {};
	double x = 0;
	cout << "Введите 5 элементов массива: ";

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	for (int i = 0; i < n; i++)
	{
		x += arr[i];
	}
	x /= n;
	//(double)x;
	cout << "\n";
	cout << "Среднее: " << x << "\n";


#endif AVERAGE

#ifdef MIN_MAX
	const int n = 5;
	int arr[n] = {};
	int min_, max_;
	cout << "Введите элементы масива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n";
	for (int i = 0; i < n; i++)
	{

	}

#endif // MIN_MAX
}