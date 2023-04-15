#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < t; j++)
        {
            if (n < 0)
            {
                cout << "Age is not valid, setting age to 0." << endl;
                cout << "You are young." << endl
                     << "You are young.";
                break;
            }
            if (n < 13 && n > 0)
            {
                cout << "You are young." << endl;
                n += 3;
                if (n > 0 && n < 13)
                    cout << "You are young." << endl;
                else
                    cout << "You are a teenager." << endl;
                break;
            }
            if (n >= 13 && n < 18)
            {
                cout << "You are a teenager." << endl;
                n += 3;
                if (n >= 13 && n < 18)
                    cout << "You are a teenager." << endl;
                else
                    cout << "You are a old." << endl;
                break;
            }
            if (n >= 18)
            {
                cout << "You are a old." << endl
                     << "You are a old." << endl;
                break;
            }
        }
    }
    return 0;
}
