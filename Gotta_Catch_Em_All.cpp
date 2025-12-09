#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for(int j = 0; j<n ; j++)
        {
            cin >> a[j];
        }
        int total = 0;
        for(int j = 0; j<n; j++)
        {
            int cost = a[j] * x;
            if(cost<=y)
            {
                total += cost;
            }
            else
            {
                total += y;
            } 
        }
        cout << total << endl;
    }
    return 0;
}