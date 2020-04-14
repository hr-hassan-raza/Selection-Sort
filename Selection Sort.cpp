#include <iostream>
using namespace std;
int main()
{
	int size, min = 0;
	cout << "Enter size of Array: ";
	cin >> size;
	int* array = new int[size];
	cout<<"*** Enter array element ***"<<endl;
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < size; i++)
	{
		min = i;
			for (int j = i + 1; j< size; j++)
			{
				if (array[min] > array[j])
				{
					min = j;
				}
			}
			int temp = array[min];
			array[min] = array[i];
			array[i] = temp;
	}
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
}
