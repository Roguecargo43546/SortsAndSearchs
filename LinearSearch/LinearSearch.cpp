// LinearSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

#define True true
#define False false
#define Not !
#define Or ||
#define And &&

//function defines
bool LinearSearch(int arr[6], int size, int target);

int main()
{
    //init the array and target
    int arr[] = { 1, 4, 5, 2, 8, 9 };
    int target = 8;

    //bool to output if found
    bool ifFound = LinearSearch(arr, 6, target);
    std::cout << ifFound;

    return 0;
}

//linear search by going through each item in array
bool LinearSearch(int arr[6], int size, int target)
{
    //arrays decay into pointers when passed into function so have to turn pointer into new, local array
    int arrayy[6] = { 0,0,0,0,0,0 };
    for (int item = 0; item < size; item++)
    {
        arrayy[item] = *(arr + item);
    }

    //through each item, if target = item then return true; if for loop ends and havent return true, return false
    for (int item = 0; item < size; item++) 
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
    return False;
}
