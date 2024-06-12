// E. Building an Aquarium
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You love fish, that's why you have decided to build an aquarium. You have a piece of coral made of n
//  columns, the i
// -th of which is ai
//  units tall. Afterwards, you will build a tank around the coral as follows:

// Pick an integer h≥1
//  — the height of the tank. Build walls of height h
//  on either side of the tank.
// Then, fill the tank up with water so that the height of each column is h
// , unless the coral is taller than h
// ; then no water should be added to this column.
// For example, with a=[3,1,2,4,6,2,5]
//  and a height of h=4
// , you will end up using a total of w=8
//  units of water, as shown.
// You can use at most x
//  units of water to fill up the tank, but you want to build the biggest tank possible. What is the largest value of h
//  you can select?
// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// The first line of each test case contains two positive integers n
//  and x
//  (1≤n≤2⋅105
// ; 1≤x≤109
// ) — the number of columns of the coral and the maximum amount of water you can use.

// The second line of each test case contains n
//  space-separated integers ai
//  (1≤ai≤109
// ) — the heights of the coral.

// The sum of n
//  over all test cases doesn't exceed 2⋅105
// .

// Output
// For each test case, output a single positive integer h
//  (h≥1
// ) — the maximum height the tank can have, so you need at most x
//  units of water to fill up the tank.

// We have a proof that under these constraints, such a value of h
//  always exists.

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long water;
        cin >> n >> water;
        int a[n];
        long long height = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        height += a[0];
        for (long long i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                height += water / n;
                break;
            }
            if (water < (i + 1) * (a[i + 1] - a[i]))
            {
                height += water / (i + 1);
                break;
            }
            if (water >= (i + 1) * (a[i + 1] - a[i]))
            {
                water = water - ((i + 1) * (a[i + 1] - a[i]));
                height += (a[i + 1] - a[i]);
            }
        }
        cout << height << endl;
    }
    return 0;
}