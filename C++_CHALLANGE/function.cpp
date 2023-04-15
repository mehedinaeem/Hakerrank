#include<bits/stdc++.h>
using namespace std;

void max(int a,int b,int c,int d)
{
    int ar[4]={a,b,c,d};
    int max=ar[0];

    for(int i=0;i<4;i++)
    {
        if(ar[i]>max)
        max=ar[i];
    }
    cout<<max<<endl;
    return;
}

int main()
{
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    max(w,x,y,z);
    return 0;
}

