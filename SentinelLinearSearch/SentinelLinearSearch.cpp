// SentinelLinearSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

#define True true
#define False false
#define Not !
#define Or ||
#define And &&

//function defines
bool SentinelLinearSearch(int arr[6], int size, int target);

int main()
{
    //init the array and target
    int arr[] = { 1, 4, 5, 2, 8, 9 };
    int target = 8;
    int const size = 6;

    //bool to output if found
    bool ifFound = SentinelLinearSearch(arr, size, target);
    std::cout << ifFound;

    return 0;
}

//sentinel linear search by going through each item in array and doesnt need to check if out of bounds of array
bool SentinelLinearSearch(int arr[6], int const size, int target)
{
    int const newSize = size + 1;
    //arrays decay into pointers when passed into function so have to turn pointer into new, local array
    int arrayy[newSize] = { 0,0,0,0,0,0,0 };
    for (int item = 0; item < size; item++)
    {
        arrayy[item] = *(arr + item);
    }
    //adds target to end of array
    arrayy[newSize] = target;

    //through each item, if target = item then return true; if for loop ends and havent return true, return false
    for (int item = 0; item < newSize; item++)
    {
        if (arrayy[item] == target)
        {
            return True;
        }
        else
        {
            continue;
        }
    }
}
