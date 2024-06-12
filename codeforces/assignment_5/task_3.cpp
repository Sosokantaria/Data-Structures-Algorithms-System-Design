// C. Target Practice
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// A 10×10
//  target is made out of five "rings" as shown. Each ring has a different point value: the outermost ring — 1 point, the next ring — 2 points, ..., the center ring — 5 points.

// Vlad fired several arrows at the target. Help him determine how many points he got.

// Input
// The input consists of multiple test cases. The first line of the input contains a single integer t
//  (1≤t≤1000
// ) — the number of test cases.

// Each test case consists of 10 lines, each containing 10 characters. Each character in the grid is either X
//  (representing an arrow) or .
//  (representing no arrow).

// Output
// For each test case, output a single integer — the total number of points of the arrows.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int A = 10;
        char c;
        int sum = 0;
        for (int i = 0; i < A; i++)
        {
            for (int j = 0; j < A; j++)
            {
                cin >> c;
                if (c == 'X')
                {
                    if (i == 0 || i == 9 || j == 0 || j == 9)
                    {
                        sum++;
                    }
                    else if (i == 1 || i == 8 || j == 1 || j == 8)
                    {
                        sum += 2;
                    }
                    else if (i == 2 || i == 7 || j == 2 || j == 7)
                    {
                        sum += 3;
                    }
                    else if (i == 3 || i == 6 || j == 3 || j == 6)
                    {
                        sum += 4;
                    }
                    else if (i == 4 || i == 5 || j == 4 || j == 5)
                    {
                        sum += 5;
                    }
                }
            }
            cout << endl;
        }
        cout << sum << endl;
    }

    return 0;
}