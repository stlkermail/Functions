// В проекте 'Arrays' вычислить сумму элементов массива, среднее арифметическое элементов массива, найти в массиве максимальный элемент и минимальноый элемент.
#include <iostream>

using std::endl;
using std::cout;
using std::cin;
//#define SUM
//#define AVERAGE
//#define MIN_MAX
using namespace std;

//void main()
//{
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

void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);
//int Sum(const int arr[], const int n);
//double Avg(const int arr[], const int n);
//int minValueIn(const int arr[], const int n);
//int maxValueIn(const int arr[], const int n);
void shiftLeft(int arr[], const int n);
void shiftRight(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 3,5,8 };

	//arr[2] = 123;             	//Обращение ко второму элементу массива на запись
	//cout << arr[2] << endl;		//Обращение ко второму элементу массива на чтение
	//SIZE-1;
	//n-1;
	// 
	//Ввод массива с класиатуры:
	//cout << "Введите элементы массива: ";
	cout << "Исходный массив:\n";
	FillRand(arr, n);
	Print(arr, n);
	cout << "Введите насколько сдвинуть элементы массива: ";
	shiftLeft(arr, n);
	shiftRight(arr, n);
	/*cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;*/
	/*cout << "Минимальное значение в массиве:  " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;*/
	cout << endl;
}
void FillRand(int arr[], const int n)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		//cin >> arr[i];
		arr[i] = rand() % 100;
	}
}
void Print(const int arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//int Sum(const int arr[], const int n)
//{
//	//Вычисление суммы элементов массива:
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
//double Avg(const int arr[], const int n)
//{
//	return (double)Sum(arr, n) / n;
//} 
//int minValueIn(const int arr[], const int n)
//{
//	int min = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] < min)min = arr[i];
//	}
//	return min;
//}
//int maxValueIn(const int arr[], const int n)
//{
//	int max = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > max)max = arr[i];
//	}
//	return max;
//}
void shiftLeft(int arr[], const int n)
{
	int j;
	cin >> j;
	//int shift = 0;
	cout << "\nМассив сдвинутый на: " << j << endl;
	for (int i = 0; i < 10; i++)
	{
		arr[i] = arr[i + j];
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void shiftRight(int arr[], const int n)
{
	int j;
	cin >> j;
	int shift;
	cout << "\nМассив сдвинутый на: " << j << endl;
	for (int i = 0; i < 10 ; i++)
	{
		shift = arr[i - j];
		cout << shift << "\t";
	}
	cout << endl;
}



