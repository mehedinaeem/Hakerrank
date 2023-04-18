#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // int x;
    // char y=' ';
    cin >> s;
    // cout << s;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ',')
        {
            //cout << endl;
            s[i] = ' ';
        }
        cout << s[i];
        if (s[i] == ' ')
        {
            cout << endl;
            //s[i] = ' ';
        }
    }
}
