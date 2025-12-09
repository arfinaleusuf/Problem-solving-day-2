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
        double perHour = y / 2.00;
        int time = n / 2;
        if (x >= perHour)
        {
            cout << x * n << endl;
        }
        else if (x < perHour)
        {
            if (n % 2 == 0)
            {
                cout << perHour * n << endl;
            }
            else
            {
                cout << (perHour * (n-1)) + x << endl;
            }
        }
    }
    return 0;
}