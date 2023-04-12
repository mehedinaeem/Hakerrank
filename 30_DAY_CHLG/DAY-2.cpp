#include <bits/stdc++.h>
using namespace std;

int main()
{
    double m_c;
    int tip_p, tax_p;
    cin >> m_c >> tip_p >> tax_p;
    int total_cost;
    total_cost = m_c + (double)(m_c * tip_p * 0.01) + (double)(m_c * tax_p * 0.01)+0.5;
    cout<<total_cost;
    
    return 0;
}
