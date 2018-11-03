//
//  main.cpp
//  Codeforces Round #443 (Div. 2) - B
//
//  Created by S M HEMEL on 26/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
long long int arr[1111];
long long int cnt[1111];
long long int Max = 0;
int main(){
    long long int n,k;
    cin >> n >> k;
    for(int i=1; i<=n; cin >> arr[i],i++);
    long long int p = 0;
    for(int i=2; i<=n; i++){
        cnt[max(arr[i-1],arr[i])]++;
        if(cnt[max(arr[i-1],arr[i])]==k)
            return 0 * printf("%lld\n",max(arr[i-1],arr[i]));
        if(Max<cnt[max(arr[i-1],arr[i])]){
            Max = cnt[max(arr[i-1],arr[i])];
            p = max(arr[i-1],arr[i]);
        }
        arr[i] = max(arr[i-1],arr[i]);
    }
    
    cout << arr[n] << endl;
    return 0;
}
