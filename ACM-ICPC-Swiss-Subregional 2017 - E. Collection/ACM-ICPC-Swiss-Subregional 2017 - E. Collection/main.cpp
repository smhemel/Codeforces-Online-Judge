//
//  main.cpp
//  ACM-ICPC-Swiss-Subregional 2017 - E. Collection
//
//  Created by S M HEMEL on 29/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int cnt[1111111];
int main(){
    int n,x,ans = 0;
    cin >> n;
    while(n--){
        cin >> x;
        cnt[x]++;
        if(cnt[x]>1)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
