#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            switch (i)
            {
            case 1:
                cout << "one";
                break;

            case 2:
                cout << "two";
                break;

            case 3:
                cout << "three";
                break;

            case 4:
                cout << "four";
                break;

            case 5:
                cout << "five";
                break;

            case 6:
                cout << "six";
                break;

            case 7:
                cout << "seven";
                break;

            case 8:
                cout << "eight";
                break;

            case 9:
                cout << "nine";
                break;
            }
            cout << endl;
        }

        if (i > 9 && i % 2 == 0)
            cout << "even" << endl;
        else if(i>9 && i%2!=0)
            cout << "odd" << endl;
    }
    return 0;
}
