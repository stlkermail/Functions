// � ������� 'Arrays' ��������� ����� ��������� �������, ������� �������������� ��������� �������, ����� � ������� ������������ ������� � ������������ �������.
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
	//arr[2] = 123; //��������� � ��������� ������� �� ������
	//cout << arr[2] << endl; // ��������� �� ������� �������� ������� �� ������ 
	cout << "������� �������� �������: ";
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
	//x = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	cout << "\n";
	cout << "����� ��������� �������: " << x << "\n";
#endif // SUM

#ifdef AVERAGE
	const int n = 5;
	int arr[n] = {};
	double x = 0;
	//arr[2] = 123; //��������� � ��������� ������� �� ������
	//cout << arr[2] << endl; // ��������� �� ������� �������� ������� �� ������ 

	cout << "������� 5 ��������� �������: ";

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
	//x = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / n;
	//(double)x;
	cout << "\n";
	cout << "�������: " << x << "\n";


#endif AVERAGE

#ifdef MIN_MAX
	const int n = 5;
	int arr[n] = {};
	int min_, max_;
	cout << "������� �������� ������: ";
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