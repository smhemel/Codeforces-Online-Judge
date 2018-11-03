//
//  main.cpp
//  Educational Codeforces Round 38 - B
//
//  Created by S M HEMEL on 17/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
#define Size 1000000
bool mark[Size];
int main() {
    int n, Max=0, x;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        mark[x] = 1;
    }
    int ans=0, II=1, FF=Size-1;
    while(II<FF && n>0){
        if(mark[II]) n--;
        if(mark[FF]) n--;
        II++, FF--;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
