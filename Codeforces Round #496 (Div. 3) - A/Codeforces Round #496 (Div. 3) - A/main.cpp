//
//  main.cpp
//  Codeforces Round #496 (Div. 3) - A
//
//  Created by S M HEMEL on 10/7/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int>v;
int main() {
    int n,x,p=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(p>=x && i!=0){
            v.push_back(p);
        }
        p = x;
    }
    v.push_back(p);
    cout << v.size() << endl;
    for(auto u: v) cout << u << " ";
    return 0;
}
