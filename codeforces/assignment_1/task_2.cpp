// შემოდის სამი მთელი რიცხვი, დაბეჭდეთ მათ შორის მაქსიმუმი.
// input:
// 56 94 3
// output:
// 94

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter three numbers :" << endl;
    cin >> a >> b >> c;
    if (a > b)
    {
        int result = (a > c) ? a : c;
        cout << "The greatest number is :" << result << endl;
    }
    else
    {
        int result = (b > c) ? b : c;
        cout << "The greatest number is :" << result << endl;
    }
    return 0;
}