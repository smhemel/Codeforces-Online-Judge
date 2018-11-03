//
//  main.cpp
//  Codeforces Round #277.5 (Div. 2) - B. BerSU Ball
//
//  Created by S M HEMEL on 5/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int b[111],g[111];
int main()
{
    int n,m;
    cin >> n;
    for(int i=0; i<n; cin >> b[i],i++);
    cin >> m;
    for(int i=0; i<m; cin >> g[i],i++);
    sort(b,b+n);
    sort(g,g+m);
    int cnt = 0;
    for(int i=0,l=0; i<n; ){
        if(i==n || l==m)
            break;
        if(g[l]==b[i]) {
            cnt++,i++,l++;
            continue;
        }
        else if(b[i]+1==g[l] || b[i]==g[l]+1){
            cnt++,i++,l++;
            continue;
        }
        if((b[i]-g[l])>1){
            l++;
            continue;
        }
        else if((g[l]-b[i])>1){
            i++;
            continue;
        }
    }
    cout << cnt << endl;
    return 0;
}
