#include "Search.h"

void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;	//����������� ��� ������� ����� �� ����������� � ������� �����,
		//�� ��� ����� ���������:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;	//���������� ��, ��� ����� ����������� �����
				break;	//��������� ������� ��������, � ��� ����������� ��������
			}
		}
		if (met_before)continue;	//��������� ������� ��������, � ��������� � ���������
		int count = 0;	//������� ����������
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("�������� %i ����������� %i ���\n", arr[i], count);
		//if (count)cout << "�������� " << arr[i] << " ���������� " << count << " ���" << endl;
	}
}
void Search(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;	//����������� ��� ������� ����� �� ����������� � ������� �����,
		//�� ��� ����� ���������:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;	//���������� ��, ��� ����� ����������� �����
				break;	//��������� ������� ��������, � ��� ����������� ��������
			}
		}
		if (met_before)continue;	//��������� ������� ��������, � ��������� � ���������
		int count = 0;	//������� ����������
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("�������� %i ����������� %i ���\n", arr[i], count);
		//if (count)cout << "�������� " << arr[i] << " ���������� " << count << " ���" << endl;
	}
}
void Search(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;	//����������� ��� ������� ����� �� ����������� � ������� �����,
		//�� ��� ����� ���������:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;	//���������� ��, ��� ����� ����������� �����
				break;	//��������� ������� ��������, � ��� ����������� ��������
			}
		}
		if (met_before)continue;	//��������� ������� ��������, � ��������� � ���������
		int count = 0;	//������� ����������
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("�������� %i ����������� %i ���\n", arr[i], count);
		//if (count)cout << "�������� " << arr[i] << " ���������� " << count << " ���" << endl;
	}
}

void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			//1) ��������, ���������� �� ������� �����:
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)break;
			}
			//2) ���� ������� ���������� �����, �� �� ��� ������ ��� �� �����, � ������ ��� ����� ������ �� �����,
			//	 ������� ���������� ��������� ���:
			if (met_before)continue;
			//3) ���� �� ������� ����� �� ����������, �� ����� �������� ������� ��� �� �����������, � ������� ��� �� �����:
			int count = 0;	//������� ����������
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("�������� %i ����������� %i ���\n", arr[i][j], count);
		}
	}
}
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			//1) ��������, ���������� �� ������� �����:
			double met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)break;
			}
			//2) ���� ������� ���������� �����, �� �� ��� ������ ��� �� �����, � ������ ��� ����� ������ �� �����,
			//	 ������� ���������� ��������� ���:
			if (met_before)continue;
			//3) ���� �� ������� ����� �� ����������, �� ����� �������� ������� ��� �� �����������, � ������� ��� �� �����:
			double count = 0;	//������� ����������
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("�������� %i ����������� %i ���\n", arr[i][j], count);
		}
	}
}
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			//1) ��������, ���������� �� ������� �����:
			char met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)break;
			}
			//2) ���� ������� ���������� �����, �� �� ��� ������ ��� �� �����, � ������ ��� ����� ������ �� �����,
			//	 ������� ���������� ��������� ���:
			if (met_before)continue;
			//3) ���� �� ������� ����� �� ����������, �� ����� �������� ������� ��� �� �����������, � ������� ��� �� �����:
			int count = 0;	//������� ����������
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("�������� %i ����������� %i ���\n", arr[i][j], count);
		}
	}
}