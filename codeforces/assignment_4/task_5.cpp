// Square String?
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// A string is called square if it is some string written twice in a row. For example, the strings "aa", "abcabc", "abab" and "baabaa" are square. But the strings "aaa", "abaaab" and "abcdabc" are not square.

// For a given string s
//  determine if it is square.

// Input
// The first line of input data contains an integer t
//  (1≤t≤100
// ) —the number of test cases.

// This is followed by t
//  lines, each containing a description of one test case. The given strings consist only of lowercase Latin letters and have lengths between 1
//  and 100
//  inclusive.

// Output
// For each test case, output on a separate line:

// YES if the string in the corresponding test case is square,
// NO otherwise.
// You can output YES and NO in any case (for example, strings yEs, yes, Yes and YES will be recognized as a positive response).

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        if (s.size() % 2 == 0)
        {
            string firstHalfOfStr = "";
            string secondHalfOfStr = "";
            for (int x = 0; x < s.size(); x++)
            {
                if (x < s.size() / 2)
                {
                    firstHalfOfStr = firstHalfOfStr + s[x];
                }else{
                    secondHalfOfStr = secondHalfOfStr + s[x];
                }
            }
            if (firstHalfOfStr == secondHalfOfStr)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}