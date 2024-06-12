// შემოდის ერთი მთელი რიცხვი n(1 < n < 1000) და შემდეგ n ცალი მთელი რიცხვი. წაიკითხეთ ეს რიცხვები მასივში, დაადგინეთ და დაბეჭდეთ არის თუ არა ეს მასივი დალაგებული ზრდადობით.
// input:
// 5
// 4 9 8 10 15
// output:
// NO

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool b = true;
    int minNum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= minNum)
        {
            minNum = arr[i];
        }
        else
        {
            b = false;
            break;
        };
    }
    if (b == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}