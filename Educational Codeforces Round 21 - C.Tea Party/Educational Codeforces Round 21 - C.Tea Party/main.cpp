//
//  main.cpp
//  Educational Codeforces Round 21 - C.Tea Party
//
//  Created by S M HEMEL on 5/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//



#include <iostream>
#include <utility>
using namespace std;
int n, w;
pair<int, int> a[111];
int ans[111];
int main()
{
    cin >> n >> w;
    for(int i=1; i<=n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a+1,n+a+1);
    for(int i=1; i<=n; i++){
        ans[a[i].second] = (a[i].first+1)/2;
        w -= ans[a[i].second];
    }
    if(w<0)
        return 0 * puts("-1");
    int i=n;
    while(w!=0){
        if(!i)
            i=n;
        if(ans[a[i].second]<a[i].first){
            ans[a[i].second]++;
            w--;
        }
        i--;
    }
    for(int i=1; i<=n; i++)
        cout << ans[i] << endl;
    return 0;
}
