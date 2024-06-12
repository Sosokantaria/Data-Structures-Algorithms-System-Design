// შემოდის ერთი მთელი რიცხვი n(1 < n < 1000) და შემდეგ n ცალი მთელი რიცხვი. წაიკითხეთ ეს რიცხვები მასივში, დაადგინეთ და დაბეჭდეთ ამ რიცხვების ჯამი
// input:
// 5
// 4 9 8 3 2
// output:
// 26

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << sum << endl;
    return 0;
}