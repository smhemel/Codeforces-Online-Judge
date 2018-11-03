//
//  main.cpp
//  Educational Codeforces Round 36  - B
//
//  Created by S M HEMEL on 13/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int n, m, l, r;
int main()
{
    cin >> n >> m >> l >> r;
    if(l != 1 && r != n){
        int ans = min(abs(l - m), abs(r - m));
        ans +=(r - l);
        ans += 2;
        cout << ans << endl;
    }
    else if(l != 1){
        int ans = abs(l - m)+1;
        cout << ans << endl;
        
    }
    else if(r != n){
        int ans = abs(r - m)+1;
        cout << ans << endl;
    }
    else cout << 0 << endl;
    
    
    return 0;
}

