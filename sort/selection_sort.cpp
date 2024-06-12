// Selection Sort
// The Selection Sort algorithm finds the lowest value in an array and moves it to the front of the array.
// The algorithm looks through the array again and again, moving the next lowest values to the front, until the array is sorted.

// Time complexity: O(N^2)

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {4, 7, 2, 10, 8};

    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int x = arr[i];
        arr[i] = arr[min];
        arr[min] = x;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}