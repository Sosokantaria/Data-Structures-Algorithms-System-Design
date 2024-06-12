// Insertion sort
//  is a simple sorting algorithm that works by iteratively inserting each element of an unsorted
//  list into its correct position in a sorted portion of the list. It is a stable sorting algorithm,
//   meaning that elements with equal values maintain their relative order in the sorted output.

// Time complexity: O(N^2)

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {4, 7, 2, 10, 8};
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        while (j != -1)
        {
            if (arr[j] > arr[j + 1])
            {
                int x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;
            }
            else
            {
                break;
            }
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
