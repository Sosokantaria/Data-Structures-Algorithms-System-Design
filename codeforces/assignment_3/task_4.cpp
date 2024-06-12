// შემოდის ერთი მთელი რიცხვი n(1 < n < 100) და შემდეგ nXn რიცხვები. წაიკითხეთ ეს რიცხვები ორ განზომილებიან მასივში, დაადგინეთ და დაბეჭდეთ მის მთავარ დიაგონალზე მყოფი ელემენტების ერთმანეთზე ნამრავლი(ნამრავლი არ გაცდება 10^9ს).
// input:
// 3
// 4 6 2
// 3 8 9
// 5 7 1
// output:
// 32

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m[n][n];
    int multiplied = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            m[i][j] = x;
            if (i == j)
            {
                multiplied = multiplied * m[i][j];
            }
        };
        cout << endl;
    }
    cout << multiplied << endl;
    return 0;
}