// შემოდის ერთი მთელი რიცხვი n(1 < n < 1000) და შემდეგ n ცალი მთელი დადებითი რიცხვი. დაადგინეთ და დაბეჭდეთ მათ შორის უდიდესი.
// input:
// 5
// 9 3 15 2 10
// output:
// 15

#include <iostream>
using namespace std;

int main()
{
    int num, nums;
    cin >> num;
    int max = 0;
    for (int i = 0; i < num; i++)
    {
        cin >> nums;
        if (nums > max)
        {
            max = nums;
        }
    }
    cout << max << endl;
    return 0;
}