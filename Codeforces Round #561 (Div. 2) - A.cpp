#include <bits/stdc++.h>
using namespace std;
int n;
vector <string> v;
map<char, int> M;
string s;
int main() {
    cin >> n;
    while(n--)
    {
        cin >> s;
        M[s[0]]++;
    }
    int ans = 0;
    for(auto it: M)
    {
        int cnt = it.second;
        int a = cnt / 2;
        int b = cnt - a;
        ans += (a * (a - 1)) / 2;
        ans += (b * (b - 1)) / 2;
    }
    cout << ans << endl;
    return 0;
}
