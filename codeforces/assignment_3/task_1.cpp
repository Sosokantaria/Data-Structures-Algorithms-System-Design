// შემოდის ერთი მთელი რიცხვი n(1 < n < 10000) და შემდეგ n ცალი მთელი რიცხვი. წაიკითხეთ ეს რიცხვები მასივში და შემდეგ დაადგინეთ კენტი რიცხვები უფრო მეტია თუ ლუწი. დაბეჭდეთ ODD, EVEN ან EQUAL.
// input:
// 5
// 4 9 8 3 2
// output:
// EVEN

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ODD = 0;
    int EVEN = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] % 2 == 0 ? EVEN++ : ODD++;
    }
    if (EVEN > ODD)
    {
        cout << "EVEN" << endl;
    }
    else if (EVEN < ODD)
    {
        cout << "ODD" << endl;
    }
    else
    {
        cout << "EQUAL";
    }

    return 0;
}
