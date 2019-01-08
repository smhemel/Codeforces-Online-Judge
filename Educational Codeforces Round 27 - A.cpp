//
//  main.cpp
//  Educational Codeforces Round 27 - A
//
//  Created by S M HEMEL on 23/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int a[1001111];
int main(){
    int n;
    cin >> n;
    int m = n;
    n <<= 1;
    for(int i=0; i<n; cin >> a[i],i++);
    sort(a,a+n);
    if(a[m]==a[m-1])
        return 0 *  puts("NO");
    puts("YES");
    return 0;
}












