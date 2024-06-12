// შემოდის ერთი მთელი კენტი რიცხვი n(1 < n < 20). დაბეჭდეთ (დახატეთ) შესაბამისი ფიგურა:

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = (n + 1) / 2;
    // n=7
    // spaces = 3, 2, 1, 0     -> m-1-i
    // stars = 1, 3, 5, 7      -> i*2+1

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m - 1 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}