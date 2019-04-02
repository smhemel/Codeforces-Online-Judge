//
//  main.cpp
//  Codeforces Round #550 (Div. 3) - B
//
//  Created by S M HEMEL on 2/4/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int total=0;
vector<int>odd,even;
int main() {
    int n,x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x&1) odd.push_back(x);
        else even.push_back(x);
    }
    sort(odd.begin(),odd.end(),greater<>());
    sort(even.begin(),even.end(),greater<>());
    if(odd.size()>even.size()) {
        for(int i=(int)even.size()+1; i<odd.size(); i++) total += odd[i];
    } else {
        for(int i=(int)odd.size()+1; i<even.size(); i++) total += even[i];
    }
    cout << total << endl;
    return 0;
}
