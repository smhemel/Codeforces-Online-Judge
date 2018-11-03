//
//  main.cpp
//  Codeforces Round #461 (Div. 2) - B. Magic Forest
//
//  Created by S M HEMEL on 8/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <set>
#include <utility>
using namespace std;
bool call(int x,int y, int z){
    if(x+y>z && x+z>y && z+y>x)
        return true;
    return false;
}
int main() {
    int cnt = 0;
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++){
            int ans = i^j;
            if(ans<=n && ans<(i+j) && call(i,j,ans) && ans>=i && ans>=j){
                cnt++;
            }
            
        }
    cout << cnt << endl;
    return 0;
}

