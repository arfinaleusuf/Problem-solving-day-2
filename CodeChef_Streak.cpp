#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int j = 0; j<t; j++)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int OmMax = 0;
        int om = 0;
        for(int i = 0; i<n; i++)
        {
            if(a[i] != 0)
            {
                om++;
                if(om>OmMax)
                {
                    OmMax = om;
                }
            }
            else if(a[i] == 0)
            {
                om = 0;
            }
        }
        int AddyMax =0;
        int addy = 0;
        for(int i = 0; i<n; i++)
        {
            if(b[i] != 0)
            {
                addy++;
                if(addy > AddyMax)
                {
                    AddyMax = addy;
                }
            }
            else if(b[i] == 0)
            {
                addy = 0;
            }
        }
        if(OmMax>AddyMax)
        {
            cout << "Om" << endl;
        }
        else if(AddyMax>OmMax)
        {
            cout << "Addy" << endl;
        }
        else if(OmMax == AddyMax)
        {
            cout << "Draw" << endl;
        }
    }
}
