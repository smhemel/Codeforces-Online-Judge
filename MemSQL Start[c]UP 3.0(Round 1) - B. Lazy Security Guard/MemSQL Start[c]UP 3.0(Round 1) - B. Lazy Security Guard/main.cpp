//
//  main.cpp
//  MemSQL Start[c]UP 3.0(Round 1) - B. Lazy Security Guard
//
//  Created by S M HEMEL on 22/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    long long ans = LONG_MAX;
    cin >> n;
    for(int i=n; i<=(n+1111); i++){
        int loop = sqrt(i)+1;
        for(int l=loop; l>=1; l--)
            if(i%l==0)
                ans = min(ans,(long long)(2*(l+(int)(i/l))));
    }
    cout << ans << endl;
    return 0;
}
