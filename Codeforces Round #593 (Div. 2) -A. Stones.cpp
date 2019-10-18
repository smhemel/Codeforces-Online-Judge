#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
ll ar[211111],br[211111];
ll graph[1111][1111];
map<int,int>M;
string s,s1;
set<ll>Se,Se1;
vector<ll>v;
ll a,b,c,n,m,x,y,k,ans,Min=99999999,Max=0,cnt;
int main() {
    cin >> n;
    while(n--){
        ans = 0;
        cin >> a >> b >> c;
        while(true){
            if(c<2 || b==0) break;
            ans+= 3;
            c -= 2;
            b -=1;
        }
        while(true){
            if(b<2 || a==0) break;
            ans+= 3;
            b -= 2;
            a -=1;
        }
        cout << ans << endl;
    }
    return 0;
}