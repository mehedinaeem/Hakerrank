#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int r;
    if(n != 1){
        r = n * factorial(n-1);
    }
    else
        r = 1;
    return r;
}

int main() {
    int n;
    cin >> n;
    int r = factorial(n);
    cout << r << endl;
}
