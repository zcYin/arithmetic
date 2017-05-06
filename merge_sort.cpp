#include <iostream>
using namespace std;

#define MAXNUM 2147483647; 

void Merge_sort(int *a, int p, int q, int r)
{
	int m = q - p + 1;
	int n = r - q;
	int L[m + 1];
	int R[n + 1];

	//let L[] and R[] be new array
	for(int i = 0; i < m; i++)
	{
		L[i] = a[p + i - 1];
	}

	for(int i = 0; i < n; i++)
	{
		R[i] = a[q + i];
	}

	L[m] = MAXNUM;
	R[n] = MAXNUM;

	// for(int i = 0; i < 4; i++)
	// {
	// 	cout << L[i] << endl;
	// }

	int i = 0;
	int j = 0;
	for(int m = p - 1; m < r; m++)
	{
		if(L[i] < R[j])
		{
			a[m] = L[i];
			i++;
		}
		else
		{
			a[m] = R[j];
			j++;
		}
	}
}

int main(int argc, char const *argv[])
{
	int array[13] = {1,2,3,4,5,46,78,79,87,45,67,99,666};
	Merge_sort(array, 6, 9, 13);
	for(int i  = 0; i < 13; i++)
	{
		cout << array[i] << endl;
	}

	return 0;
}


















