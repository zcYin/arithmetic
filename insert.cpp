#include <iostream>
using namespace std;

void InsertionSort(int *a,int len)
{
	for(int i = 1;i < len; i++)
	{
		int key = a[i];
		int j = i-1;
		while(j > 0 && key < a[j])
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}	
}

int main()
{
	int array[5] = {1,3,2,7,5};
	InsertionSort(array, 5);
	for(int i = 0;i < 5; i++)
	{
		cout << array[i] << endl;
	}
}