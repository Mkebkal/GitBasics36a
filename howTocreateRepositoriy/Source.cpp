#include<iostream>
using namespace std;
const int ROWS = 10;
const int COLS = 10;

void ArrayRandomGenerator(int arr[], const int SIZE);// int
void ArrayRandomGenerator(double arr[], const int SIZE);//double
void ArrayRandomGenerator(int arr[ROWS][COLS], const int ROWS, const int COLS);


void ArrayPrint(int arr[], const int SIZE);
void ArrayPrint(double arr[], const int SIZE);
void ArrayPrint(int arr[ROWS][COLS], const int ROWS, const int COLS);

void SortArray(int arr[], int SIZE);
void SortArray(double  arr[], int SIZE);
void SortArray(int arr[ROWS][COLS], const int ROWS, const int COLS);

int TotalOfArray(int arr[], int SIZE);
double TotalOfArray(double arr[], int SIZE);
int TotalOfArray(int arr[ROWS][COLS], const int ROWS, const int COLS);

double AverageOfArray(int arr[], int SIZE);
double AverageOfArray(double arr[], int SIZE);
double  AvarageOfArray(int arr[ROWS][COLS], const int ROWS, const int COLS);

int MinOfArray(int arr[], int SIZE);
double MinOfArray(double  arr[], int SIZE);
int MinOfArray(int arr[ROWS][COLS], const int ROWS, const int COLS);

int MaxOfArray(int arr[], int SIZE);
double MaxOfArray(double  arr[], int SIZE);
int MaxOfArray(int arr[ROWS][COLS], const int ROWS, const int COLS);


void main()
{
	const int SIZE = 10;
	double brr[SIZE];
	int arr[SIZE];



	cout << "Random generated array: ";
	ArrayRandomGenerator(arr, SIZE);
	ArrayPrint(arr, SIZE);

	cout << "\nSorted array is: ";

	SortArray(arr, SIZE);

	cout << endl << "Total of array is:" << TotalOfArray(arr, SIZE);

	cout << endl << "Average of array is:" << AverageOfArray(arr, SIZE);

	cout << endl << "Min element is: " << MinOfArray(arr, SIZE);
	cout << endl << "Max element is: " << MaxOfArray(arr, SIZE);
	cout << endl;
	cout << endl;


	cout << "Double Random generated array: ";
	ArrayRandomGenerator(brr, SIZE);
	ArrayPrint(brr, SIZE);
	cout << endl;

	cout << "Double Sorted arrray is: ";
	SortArray(brr, SIZE);
	cout << endl;
	cout << "Double Total of array is:" << TotalOfArray(brr, SIZE);


	cout << endl << "Double Average of array is: " << AverageOfArray(brr, SIZE);


	cout << endl << "Double Min element is: ";

	cout << MinOfArray(brr, SIZE);
	cout << endl << "Double Max element is: ";
	cout << MaxOfArray(brr, SIZE);
	cout << endl;



	int A[ROWS][COLS];
	cout << "Matrix array" << endl;
	ArrayRandomGenerator(A, ROWS, COLS);
	ArrayPrint(A, ROWS, COLS);

	cout << "Sort of Matrix array: " << endl;
	SortArray(A, ROWS, COLS);
	ArrayPrint(A, ROWS, COLS);

	cout << "Total of Matrix array: " << TotalOfArray(A, ROWS, COLS) << endl;

	cout << "Min of Matrix Array: ";
	cout << MinOfArray(A, ROWS, COLS);
	cout << endl;

	cout << "Max of Matrix Array: ";
	cout << MaxOfArray(A, ROWS, COLS);
	cout << endl;

	cout << "Avarage of Matrix Array: ";
	cout << AvarageOfArray(A, ROWS, COLS);
	cout << endl;
}


void ArrayRandomGenerator(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}
void ArrayRandomGenerator(double arr[], const int SIZE)
{

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = double(rand() % 100) / 10;
	}
}
void ArrayRandomGenerator(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

}


void ArrayPrint(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}
void ArrayPrint(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
}
void ArrayPrint(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
}

void SortArray(int  arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			int temp = 0;
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
}
void SortArray(double  arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			double  temp = 0;
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
}
void SortArray(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;
				if (k == i)
				{
					l = j + 1;
				}
				else
				{
					l = 0;
				}
				for (; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}

			}
		}
	}
	cout << "Number of iterations: " << iterations << endl;
}


int TotalOfArray(int arr[], int SIZE)
{
	double total = 0;
	for (int i = 0; i < SIZE; i++)
	{
		total += arr[i];
	}
	return total;
}
double  TotalOfArray(double arr[], int SIZE)
{
	double total = 0;
	for (int i = 0; i < SIZE; i++)
	{
		total += arr[i];
	}
	return total;
}
int TotalOfArray(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double total = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			total += arr[i][j];
		}

	}
	return total;
}


double AverageOfArray(int arr[], int SIZE)
{
	return (double)TotalOfArray(arr, SIZE) / SIZE;
}
double AverageOfArray(double arr[], int SIZE)
{
	return (double)TotalOfArray(arr, SIZE) / SIZE;
}
double  AvarageOfArray(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)TotalOfArray(arr, ROWS, COLS) / (ROWS*COLS);
}


int MinOfArray(int arr[], int SIZE)
{
	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}
double MinOfArray(double  arr[], int SIZE)
{
	double min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}
int MinOfArray(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}

		}
	}
	return min;
}

int MaxOfArray(int arr[], int SIZE)
{
	int max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
double MaxOfArray(double arr[], int SIZE)
{
	double max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
int MaxOfArray(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}

	}
	return max;

}