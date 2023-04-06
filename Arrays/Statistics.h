#pragma once
#include "constants.h"
#include "stdafx.h"


int Sum(const int arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(const int arr[], const int n);
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(const int arr[], const int n);
int minValueIn(double arr[], const int n);
int minValueIn(char arr[], const int n);

int maxValueIn(const int arr[], const int n);
int maxValueIn(double arr[], const int n);
int maxValueIn(char arr[], const int n);

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);
