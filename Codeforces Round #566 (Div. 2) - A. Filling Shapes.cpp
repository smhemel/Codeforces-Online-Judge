#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long int ans = pow(2,(int)(n/2));
    if(n&1) puts("0");
    else cout << ans << endl;
    return 0;
}
