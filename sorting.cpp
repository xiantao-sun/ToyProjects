
#include "stdafx.h"
#include "iostream"
#include <time.h> 
using namespace std;
void sorting(int *array, int size)
{
	for (int i = 0; i < size; i ++)
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				int tmp = array[i];
				array[i] = array[j];
					array[j] = tmp;
			}
		}
}

int main()
{

		clock_t t;
		int f;
		int *array = NULL;
		int n_size;
		cout << "give size of the array:" <<endl;
		cin >> n_size;
		array = new int[n_size];
		
		for (int i = 0; i < n_size; i++)
			array[i] = n_size - i;

		cout << endl;
		t = clock();
		sorting(array, n_size);
		t = clock() - t;
		cout<< "It took me " <<(((float)t)*1000 / CLOCKS_PER_SEC)<<" milliseconds to sort "<<n_size << " intergers" <<endl;

		delete[] array;

	return 0;
}

/*It took me 3808 milliseconds to sort 100000 intergers*/
