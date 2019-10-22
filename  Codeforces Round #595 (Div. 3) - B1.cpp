#include <bits/stdc++.h>
#define ll int
using namespace std;
ll a,b,c,n,m,k,x,y;
ll ar[211111];
int main()
{
    ll test;
    cin >> test;
    while(test--) {
        x = 0;
        cin >> n;
        for(int i=1; i<=n; i++){
            cin >> ar[i];
        }
        for(int i=1; i<=n; i++){
            int cnt = 0;
            int p = i;
            int x = ar[i];
            while(true){
                if(i==x){
                    cnt++;
                    break;
                }
                else {
                    cnt++;
                    x = ar[x];
                }
            }
            cout << cnt << " ";
        }
        cout << endl;
    }
    return 0;
}