#include "stdafx.h"
#include "constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Statistics.h"
#include "Sort.h"
#include "Shift.h"
#include "Search.h"

#define ARRAYS_1
#define ARRAYS_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef ARRAYS_1
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FillRand(arr, n, 0, 10);
	//UniqueRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве:  " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Search(arr, n);
	Sort(arr, n);
	Print(arr, n);


	/*int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);*/

	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
#endif // ARRAYS_1

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS, 10, 20);
	Sort(i_arr_2, ROWS, COLS);
	cout << endl;
	Search(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << endl;
	Search(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;
	UniqueRand(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Минимальное значение двумерного массива: " << minValueIn(i_arr_2, ROWS, COLS) << "\n";
	cout << "Максимальное значение двумерного массива: " << maxValueIn(i_arr_2, ROWS, COLS) << "\n";

}









