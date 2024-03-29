#include "pch.h"
#include <iostream>


void BubbleSort(int arr[],const int size)
{
	std::cout << "The array before sorting is : ";

	for (int i = 0; i < size; i++)
	{

		std::cout << arr[i] << " ";
	}

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{

			if (arr[j] > arr[j + 1])
			{
				int c = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = c;
			}
		}
	}

	std::cout << std::endl;
	std::cout << "The array after Bubble sort is : ";

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
}

void InsertionSort(int arr[], const int size)
{
	int smallNb;

	std::cout << "The array before sorting is : ";

	for (int i = 0; i < size; i++)
	{

		std::cout << arr[i] << " ";
	}

	for (int i = 1; i < size; i++) {
		smallNb = arr[i];
		int j = i;
		while (j > 0 && arr[j - 1] > smallNb) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = smallNb;
	}

	std::cout << std::endl;
	std::cout << "The array after Bubble sort is : ";

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void QuickSort()
{
	//I don't understand how this one works
}

int main()
{
	int size = 0;
	int userChoice;
	std::cout << "Enter the array size" << std::endl;
	std::cin >> size;
	int arr[10];
	std::cout << "Fill the array" << std::endl;
	for(int i=0;i<size;i++)
	{
		std::cin >> arr[i];
	}
	std::cout << "Choose between Bubble sort(1) and Insertion sort(2) " << std::endl;
	std::cin >> userChoice;
	if(userChoice==1)
	{
		BubbleSort(arr, size);
	}
	else
	{
		InsertionSort(arr, size);
	}
	system("pause");
	return EXIT_SUCCESS;
}
