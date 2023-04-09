#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    int ar[50];
    int sum1=0;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>ar[j];

            if(i==j)
            {
                sum1+=ar[i-j];
            }
        }
    }
}