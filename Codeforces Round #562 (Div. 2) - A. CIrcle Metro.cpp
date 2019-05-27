#include <bits/stdc++.h>
using namespace std;
int a,b,c,n,m,x,y,z,k;
int main(){
    cin >> n >> a >> x >> b >> y;
    k = 0;
    while(true){
        a++;
        if(a==n+1) a = 1;
        b--;
        if(b==0) b = n;
        if (a == b)
            return 0 * puts("YES");
        if(b==y) break;
        if(a==x) break;
        if(k==2000) break;
        k++;
    }
    puts("NO");
    return 0;
}
