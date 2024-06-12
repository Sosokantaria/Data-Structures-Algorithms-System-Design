// შემოდის ერთი მთელი რიცხვი n(1 < n < 10000), დაადგინეთ არის თუ არა ეს რიცხვი მარტივი.
// input:
// 37
// output:
// YES

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int separators = 0;

    for (int i = 0; i <= number; i++)
    {
        if (number % i == 0)
        {
            separators++;
        }
    }
   

    if (separators <= 2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}