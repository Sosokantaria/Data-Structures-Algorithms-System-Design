// D. 1D Eraser
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given a strip of paper s
//  that is n
//  cells long. Each cell is either black or white. In an operation you can take any k
//  consecutive cells and make them all white.

// Find the minimum number of operations needed to remove all black cells.

// Input
// The first line contains a single integer t
//  (1≤t≤1000
// ) — the number of test cases.

// The first line of each test case contains two integers n
//  and k
//  (1≤k≤n≤2⋅105
// ) — the length of the paper and the integer used in the operation.

// The second line of each test case contains a string s
//  of length n
//  consisting of characters B
//  (representing a black cell) or W
//  (representing a white cell).

// The sum of n
//  over all test cases does not exceed 2⋅105
// .

// Output
// For each test case, output a single integer — the minimum number of operations needed to remove all black cells.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                res++;
                i += k - 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}