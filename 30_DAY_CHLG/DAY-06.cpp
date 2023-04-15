#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;

    for (int j = 0; j < n; j++)
    {
        cin >> s;
        for (int i = 0; i < s.length(); i += 2)
        {
            cout << s[i];
        }
        cout << " ";
        for (int k = 1; k < s.length(); k += 2)
        {
            cout << s[k];
        }
        cout << endl;
    }
    return 0;
}