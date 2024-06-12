// შემოდის ერთი მთელი სამნიშნა რიცხვი, დაადგინეთ ამ რიცხვის ციფრთა ჯამი.
// input:
// 582
// output:
// 15

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "enret number " << endl;
    cin >> x;
    do
    {
        y = y + (x % 10);
        x = x / 10;
    } while (x > 0);
    cout << "our number sum is :" << y << endl;
    return 0;
}