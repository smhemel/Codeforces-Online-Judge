//
//  main.cpp
//  Educational Codeforces Round 42 - A. Equator
//
//  Created by S M HEMEL on 10/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int a[1111111];
int main() {
    int n,x,cnt = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        cnt += a[i];
    }
    int div = cnt/2;
    div += (cnt%2==1);
    cnt  = 0;
    for(int i=1; i<=n; i++){
        cnt += a[i];
        if(cnt>=div) return 0 * printf("%d\n",i);
    }
    return 0;
}
