// Make it White
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You have a horizontal strip of n
//  cells. Each cell is either white or black.

// You can choose a continuous segment of cells once and paint them all white. After this action, all the black cells in this segment will become white, and the white ones will remain white.

// What is the minimum length of the segment that needs to be painted white in order for all n
//  cells to become white?

// Input
// The first line of the input contains a single integer t
//  (1≤t≤104
// ) — the number of test cases. The descriptions of the test cases follow.

// The first line of each test case contains a single integer n
//  (1≤n≤10
// ) — the length of the strip.

// The second line of each test case contains a string s
// , consisting of n
//  characters, each of which is either 'W' or 'B'. The symbol 'W' denotes a white cell, and 'B' — a black one. It is guaranteed that at least one cell of the given strip is black.

// Output
// For each test case, output a single number — the minimum length of a continuous segment of cells that needs to be painted white in order for the entire strip to become white.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int n;
        string s;
        cin >> n >> s;
        int firstIndexOfBlack = -1, lastIndexOfBlack = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                lastIndexOfBlack = i;
                break;
            }
        }
        for (int i = 0; i <= n - 1; i++)
        {
            if (s[i] == 'B')
            {
                firstIndexOfBlack = i;
                break;
            }
        }
        cout << lastIndexOfBlack - firstIndexOfBlack + 1 << endl;
    }
    return 0;
}