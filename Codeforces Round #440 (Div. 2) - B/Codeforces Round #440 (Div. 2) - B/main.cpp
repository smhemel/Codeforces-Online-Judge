//
//  main.cpp
//  Codeforces Round #440 (Div. 2) - B
//
//  Created by S M HEMEL on 15/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<long long> ar(n);
    for(int i=0; i<n; i++)
        cin >> ar[i];
    if(k==1){
        long long int t = ar[0];
        for(int i=1; i<n; i++)
            t = min(t,ar[i]);
        cout << t << endl;
        return 0;
    }
    if(k==2)
    {
        vector<long long> pe(n),su(n);
        pe[0]= ar[0];
        for(int i=1; i<n; i++)
            pe[i] = min(pe[i-1],ar[i]);
        su[n-1] = ar[n-1];
        for(int i=n-1; i>=0; i--){
            su[i] = min(su[i+1],ar[i]);
        }
        long long int ans = max(ar[0],ar[n-1]);
        long long te;
        for(int i=1; i<n; i++){
            te = max(pe[i-1],su[i]);
            ans = max(ans,te);
        }
        cout << ans << endl;
        return 0;
    }
    long long int temp = ar[0];
    for(int i=1; i<n; i++){
        temp = max(temp,ar[i]);
    }
    cout << temp << endl;
    return 0;
}
