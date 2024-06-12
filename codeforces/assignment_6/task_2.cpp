// B. Not Quite Latin Square
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// A Latin square is a 3×3
//  grid made up of the letters A
// , B
// , and C
//  such that:

// in each row, the letters A
// , B
// , and C
//  each appear once, and
// in each column, the letters A
// , B
// , and C
//  each appear once.
// For example, one possible Latin square is shown below.
// ⎡⎣⎢ACBBACCBA⎤⎦⎥
// You are given a Latin square, but one of the letters was replaced with a question mark ?
// . Find the letter that was replaced.

// Input
// The first line of the input contains a single integer t
//  (1≤t≤108
// ) — the number of testcases.

// Each test case contains three lines, each consisting of three characters, representing the Latin square. Each character is one of A
// , B
// , C
// , or ?
// .

// Each test case is a Latin square with exactly one of the letters replaced with a question mark ?
// .

// Output
// For each test case, output the letter that was replaced.

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                char k;
                cin >> k;
                if (k == 'A')
                {
                    a++;
                }
                else if (k == 'B')
                {
                    b++;
                }
                else if (k == 'C')
                {
                    c++;
                }
            }
            cout << endl;
        }
        if (a == b)
        {
            cout << 'C' << endl;
        }
        else if (a == c)
        {
            cout << 'B' << endl;
        }
        else
        {
            cout << 'A' << endl;
        }
    }

    return 0;
}