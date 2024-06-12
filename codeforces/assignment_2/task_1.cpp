// შემოდის ერთი მთელი რიცხვი n(1 < n < 10000), დაბეჭდეთ ყველა კენტი რიცხვი ერთიდან n-მდე.
// input:
// 6
// output:
// 1
// 3
// 5

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            cout << i << endl;
    }
    return 0;
}