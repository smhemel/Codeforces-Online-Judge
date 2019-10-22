#include <bits/stdc++.h>
#define ll int
using namespace std;
map<ll,ll>M;
ll a,b,c,n,m,k,x,y;
string s,s1;
vector<ll>v;
ll ar[211111],br[211111];
int main()
{
    ll test;
    cin >> test;
    while(test--) {
        x = 0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }
        sort(ar,ar+n);
        for(int i=1; i<n; i++){
            if(abs(ar[i-1]-ar[i])==1){
                x++;
            }
        }
 
        if(x>=1){
            puts("2");
        } else puts("1");
    }
    return 0;
}