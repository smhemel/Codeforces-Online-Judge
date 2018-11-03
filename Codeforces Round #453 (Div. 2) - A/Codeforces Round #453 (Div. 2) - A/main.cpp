//
//  main.cpp
//  Codeforces Round #453 (Div. 2) - A
//
//  Created by S M HEMEL on 19/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <utility>
#define ll long long int
using namespace std;
int a[1111];
int main(){
    int n,m;
    bool f = false;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        if(x==0) {
            a[0] = 1;
            f = true;
            
        }
        x++;
        for(int j=x; j<=y; j++)
            a[j] = 1;
            
    }
    for(int i=0; i<=m; i++)
        if(a[i]==0)
            return 0 * puts("NO");
    puts("YES");
    return 0;
}
