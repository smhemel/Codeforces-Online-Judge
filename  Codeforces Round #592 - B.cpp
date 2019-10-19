#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll ar[3][2111];
vector<ll> v;
string s;
ll a,b,c,d,n,m,k,x,y;
set<ll>S;
map<ll,ll>M;
int main(){
    ll t;
    cin >> t;
    while(t--) {
        x = 0,y = 0;
        cin >> k;
        cin >> s;
        for(int i=0; i<k; i++){
            if(!(s[i]-'0')) x++;
            else {
                x+=2;
                y = (i+1)*2;
            }
        }
        for(int i=k-1; i>=0; i--){
                if(s[i]-'0') y = max(y,(k-i)*2);
            }
        cout << max(x,y) << endl;
    }
    return 0;
}