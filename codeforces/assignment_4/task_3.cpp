// დაწერეთ ფუნქცია რომელსაც გადაეცემა string და ორი სიმბოლო(c1 და c2) და დააბრუნებს ახალ string-s სადაც ყველა c1 იქნება შეცვლილი c2-თ. გამოიძახეთ ეს ფუნქცია main ფუნქციაში.

#include <iostream>
#include <string>
using namespace std;

string replace(string s, char c1, char c2)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c1)
        {
            s[i] = c2;
        }
    }
    return s;
}

int main()
{
    cout << replace("test", 't', 'p') << endl;
    return 0;
}