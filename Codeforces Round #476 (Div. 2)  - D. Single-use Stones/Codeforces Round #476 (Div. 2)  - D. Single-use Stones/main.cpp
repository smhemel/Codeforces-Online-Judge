//
//  main.cpp
//  Codeforces Round #476 (Div. 2)  - D. Single-use Stones
//
//  Created by S M HEMEL on 26/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>v,v1;
int ar[111111];
int main(){
    int w,l;
    cin >> w >> l;
    for(int i=1; i<w; i++){
        cin >> ar[i];
        sum[i] = sum[i-1]+a[i];
    }
    a[w] = 1e9;
    sum[w] = sum[w-1]+a[w];
    for(int i=1; i<w; i++){
        int Q = sum[min(w,i+1)]-sum[i];
        nt[i] = min[Q,a[i]];
        ntsum[i] = ntsum[i-1] + nt[i];
    }
    ntsum[w] = ntsum[w-1];
    long long int ans = sum[l];
    for(int i=1; i<w; i++){
        int r = i+1-l;
        long long int res = ntsum[r]-ntsum[i-1];
        ans = min(ans,res);
    }
    cout << ans << endl;
    return 0;
}
