//
//  main.cpp
//  Codeforces Round #481 (Div. 3) - A
//
//  Created by S M HEMEL on 13/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int ar[10001];
vector<int> v;
map<int,int> M;
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; cin >> ar[i], i++);
    for(int i=n-1; i>=0; i--){
        if(!M[ar[i]])
            v.push_back(ar[i]);
        M[ar[i]] = 1;
    }
    reverse(v.begin(),v.end());
    cout << v.size() << endl;
    for(auto u: v)
        cout << u << " ";
    return 0;
}
