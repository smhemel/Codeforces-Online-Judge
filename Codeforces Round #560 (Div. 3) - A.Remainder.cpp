#include <bits/stdc++.h>
using namespace std;
string s,now;
int main()
{
    int n, x, y;

    cin >> n >> x >> y;
    cin >> s;
    now = "";
    for(int i=1; i<n-y; i++) now+="0";
    now+="1";
    for(int i=0; i<y; i++) now+="0";
    int ans = 0;

    for(int i=n-1; i>=n-x; i--)
        if(s[i]!=now[i]) ans++;

        cout<<ans<<endl;
    return 0;
}