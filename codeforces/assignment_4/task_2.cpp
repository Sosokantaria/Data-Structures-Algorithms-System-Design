// დაადგინებთ მოცემული string არის თუ არა პალინდრომი (სტრიქონი პალინდრომია, თუ ის ერთნაირად იკითხება მარცხნიდან და მარჯვნიდან).
// input:
// agopoga
// output:
// YES

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string rev = "";
    for (int i = s.size()-1; i >= 0; i--)
    {
        rev = rev + s[i];
    }
    if (s == rev)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}