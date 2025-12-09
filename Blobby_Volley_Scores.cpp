#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char server = 'A';
        int countA = 0;
        int countB = 0;
        for(int i = 0; i<n; i++)
        {
            if(s[i] == 'A')
            {
                if(server == 'A')
                {
                    countA++;
                }
                if(server == 'B')
                {
                    server = 'A';
                }
            }
            else if(s[i] == 'B')
            {
                if(server == 'A')
                {
                    server = 'B';
                }
                else if (server == 'B')
                {
                    countB++;
                }
            }
        }
        cout << countA << " " << countB << endl;
    }

}
