//
//  main.cpp
//  Codeforces Round #469 (Div. 2) - A
//
//  Created by S M HEMEL on 9/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <utility>
using namespace std;
map<int,int> M;
string s;
int ar[1111111];
int main(){
    int l,r,n;
    cin >> l >> r >> n;
    if((l==0 && n==0) || (r==0 && n==0))
        return 0 * puts("0");
    while(n--){
        if(r>l)
            l++;
        else r++;
    }
    cout << 2*min(l,r) << endl;
    return 0;
}
