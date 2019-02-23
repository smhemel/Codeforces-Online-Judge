//
//  main.cpp
//  Educational Codeforces Round 60 - A
//
//  Created by S M HEMEL on 21/2/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int ar[211111];
int main(int argc, const char * argv[]) {
    int n,ans=0,rem = 0,cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> ar[i];
        rem = max(ar[i],rem);
    }
    for(int i=0; i<n; i++){
        if(ar[i]==rem) cnt++;
        else {
            ans = max(cnt,ans);
            cnt = 0;
        }
    }
    ans = max(cnt,ans);
    cout << ans << endl;
    return 0;
}
