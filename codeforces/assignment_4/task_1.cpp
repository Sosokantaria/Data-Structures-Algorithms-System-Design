// შემოდის სიმბოლოების ერთობლიობა(string), დაადგინეთ რამდენ ციფრს შეიცავს ის.
// input:
// k4ji8ij55r
// output:
// 4

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int nums;
    for (int i = 0; i < s.size(); i++)
    {
        if ((int)s[i] >= 48 && (int)s[i] <= 57)
        {
            nums++;
        }
    }
    cout << nums << endl;

    return 0;
}