#include <bits/stdc++.h>
using namespace std;
int n,m,k,l,i,j,a,b,d[300005],res,c,ans,t;
vector<pair<int,int>>p,v;
map<pair<int, int>,int> mp;
int check(int a,int b){
    for(int i=0; i<m; i++){
        if (p[i].first != a && p[i].second != a && p[i].first != b &&
            p[i].second != b) return 0;
    }
    return 1;
}
int main() {
    cin >> n >> m;
    for(i=0; i<m; i++){
        cin >> a >> b;
        if(mp[{a,b}]==1) continue;
        k++;
        mp[{a,b}] = 1;
        mp[{b,a}] = 1;
        p.push_back({a,b});
    }
    m = k;
    a = p[0].first;
    b = p[0].second;
    int ch = 0;
    for(i=1; i<m; i++){
        if (p[i].first != a && p[i].second != a && p[i].first != b &&
            p[i].second != b){
            res += check(a,p[i].first);
            res += check(a, p[i].second);
            res += check(b, p[i].first);
            res += check(b, p[i].second);
            ch = 1;
            break;
        }
    }
    if(ch==0 || res>0) puts("YES");
    else puts("NO");
    return 0;
}
