// BinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

#define True true
#define False false
#define Not !
#define Or ||
#define And &&

//function defines
bool BinarySearch(int arr[6], int size, int target);

int main() 
{
	//init array and target (array needs to be ordered)
	int arr[] = { 1, 2, 4, 5, 6, 8 };
	int target = 8;

	//bool to output if found
	bool ifFound = BinarySearch(arr, 6, target);
	std::cout << ifFound;

	return 0;
}

//binary search by finding the half way position and checking if ==, >, < and then setting the new centre
bool BinarySearch(int arr[6], int size, int target)
{
	//arrays decay into pointers when passed into function so have to turn pointer into new, local array
	int arrayy[6] = { 0,0,0,0,0,0 };
	for (int item = 0; item < size; item++)
	{
		arrayy[item] = *(arr + item);
	}

	//assign top position, bottom position and middle position
	int lowPosition = 0;
	int midPosition = 0;
	int highPosition = (size - 1);

	//while there is still positions not checked
	while (lowPosition <= highPosition)
	{
		//gets the mid position based on high and low position
		midPosition = ((highPosition - lowPosition) / 2) + lowPosition;

		//if target, return true
		if (arrayy[midPosition] == target)
		{
			return True;
		}
		//else, check if > or < and update top position and bottom position
		else if (arrayy[midPosition] < target)
		{
			lowPosition = midPosition + 1;
		}
		else
		{
			highPosition = midPosition - 1;
		}
	}
	// if not in list
	return False;
}