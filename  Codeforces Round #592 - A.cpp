#include <bits/stdc++.h>
#define ll long long int
using namespace std;
string s;
ll a,b,c,d,n,m,k,x,y;
int main(){
    int t;
    cin >> t;
    while(t--) {
        ll ans = 0, ans1=0;
        cin >> a >> b >> c >> d >> k;
        if(a>=c) {ans = (a/c);
            if(a%c) ans++;
            }
        if(ans==0) ans = 1;
        if(b>=d) {ans1 = (b/d);
        if(b%d) ans1++;
        }
        if(ans1==0) ans1 = 1;
        
        if(ans+ans1<=k) cout << ans << " " << ans1 << endl;
        else puts("-1");
    }
    return 0;
}