#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1;
    int x, y;
    cin >> s;
    cin >> s1;
    cout << s.length() << " " << s1.length() << endl;
    cout << s + s1 << endl;

    for (int i = 0; i < s.length(); i++)
    {
        y = s[0];
    }

    for (int i = 0; i < s1.length(); i++)
    {
        x = s1[0];
    }

    for (int i = 0; i < s.length(); i++)
    {
        s[0] = x;
    }
    cout << s << " ";

    for (int i = 0; i < s1.length(); i++)
    {
        s1[0] = y;
    }
    cout << s1;
    return 0;
}