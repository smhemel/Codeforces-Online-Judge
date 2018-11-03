//
//  main.cpp
//  Codeforces Round #265 (Div. 2) - B. Inbox (100500)
//
//  Created by S M HEMEL on 7/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int a[10000];
int main()
{
    bool f = false;
    int n,temp = 0;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],i++);
    int ans = 0;
    for(int i=0; i<n; i++){
        if(a[i]==1){
            ans++;
            ans += temp;
            temp = 0;
            f = true;
            continue;
        }
        if(f){
            temp = 1;
            f = false;
        }
    }
    cout << ans << endl;
    return 0;
}
