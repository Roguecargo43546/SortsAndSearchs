// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

#define True true
#define False false
#define Not !
#define Or ||
#define And &&

//function defines
void BubbleSort(int arr[6], int size);
void OutputArray(int arr[6], int size);

int main()
{
    //init array
    int arr[] = { 1, 4, 5, 2, 8, 9 };

    //outputs array sorted itself
    BubbleSort(arr, 6);

    return 0;
}

//goes through each item and sorts them in order
void BubbleSort(int arr[6], int size)
{
    //arrays decay into pointers when passed into function so have to turn pointer into new, local array
    int arrayy[6] = { 0,0,0,0,0,0 };
    for (int item = 0; item < size; item++)
    {
        arrayy[item] = *(arr + item);
    }

    //the actual bubble sort part
    bool swapped = True;
    while (swapped = True)
    {
        //resets swapped
        swapped = False;

        //goes through each item besides the last
        for (int item = 0; item < (size - 1); item++)
        {
            //checks if the item is bigger than the next
            if (arrayy[item] > arrayy[item + 1])
            {
                //swaps the 2 items and updates swapped
                int temp = arrayy[item];
                arrayy[item] = arrayy[item + 1];
                arrayy[item + 1] = temp;
                swapped = True;
            }
        }
        //checks to see if swapped, if not then can exit as it is sorted
        if (swapped == False)
        {
            break;
        }
    }
    //outputs the array to console
    OutputArray(arrayy, size);
}

//outputs array to console
void OutputArray(int arr[6], int size)
{
    //arrays decay into pointers when passed into function so have to turn pointer into new, local array
    int arrayy[6] = { 0 ,0 ,0 ,0 ,0 ,0 };
    for (int item = 0; item < size; item++)
    {
        arrayy[item] = *(arr + item);
    }

    //outputs each part of the array
    for (int counter = 0; counter < size; counter++)
    {
        if (counter == (size - 1))
        {
            std::cout << arrayy[counter] << "\n";
        }
        else
        {
            std::cout << arrayy[counter] << ", ";
        }
    }
}
