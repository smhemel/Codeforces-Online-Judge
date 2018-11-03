//
//  main.cpp
//  Codeforces Round #508 (Div. 2) - C
//
//  Created by S M HEMEL on 6/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
int ar[211111],br[211111];
map<int,int>M;
int main() {
    int n,t2 = 0,t1 = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> ar[i];
        t1+= ar[i];
        M[ar[i]] = 1;
    }
    for(int i=0; i<n; i++){
        cin >> br[i];
        t2+= br[i];
    }
    if(t1==t2) return 0 * puts("0");
    int ans = -INT_MAX;
    for(int i=0; i<n; i++)
        for(int j=0; j<n ;j++){
            ans = max(ans,(ar[i]-br[i]));
        }
    cout << ans << endl;
    return 0;
}
