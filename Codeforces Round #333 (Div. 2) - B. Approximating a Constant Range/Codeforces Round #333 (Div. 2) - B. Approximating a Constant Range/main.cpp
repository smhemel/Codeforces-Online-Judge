//
//  main.cpp
//  Codeforces Round #333 (Div. 2) - B. Approximating a Constant Range
//
//  Created by S M HEMEL on 13/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#include <set>
#include <cstdio>
#include <algorithm>
using namespace std;
int arr[100005],a[100005];
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> arr[i];
    for(int i=0; i<n-1; i++) a[i]=arr[i]-arr[i+1];
    int l=0,r=0,prev=0,prev_pos=0,ans=0;
    n--;
    for(r=0; r<n; r++){
        if(prev==0 || a[r]!=prev)
            ans = max(ans,r-l+1);
        else l=prev_pos+1;
        if(a[r]==1){
            prev=1;
            prev_pos=r;
        }
        else if(a[r]==-1){
            prev=-1;
            prev_pos=r;
        }
    }
    cout << ++ans << endl;
    return 0;
}
