//
//  main.cpp
//  Educational Codeforces Round 34 - B
//
//  Created by S M HEMEL on 12/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector<string> v;
int main(){
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    while(x>0){
        if(b>=x || a>y) {
            v.push_back("STRIKE");
            x -= b;
        }
        else{
            a += c;
            v.push_back("HEAL");
        }
        a -= y;
    }
    cout << v.size() << endl;
    for(auto u: v) cout << u << endl;
    return 0;
}
