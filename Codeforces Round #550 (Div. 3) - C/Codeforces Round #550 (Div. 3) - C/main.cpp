//
//  main.cpp
//  Codeforces Round #550 (Div. 3) - C
//
//  Created by S M HEMEL on 2/4/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <bits/stdc++.h>
#include <vector>
using namespace std;
int total;
vector<int>first,second;
int ar[211111];
int main() {
    int n,x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        ar[x]++;
        if(ar[x]==1) first.push_back(x);
        if(ar[x]==2) second.push_back(x);
        if(ar[x]==3) return 0 * puts("No");
    }
    puts("Yes");
    cout << first.size() << endl;
    sort(first.begin(),first.end());
    for(auto el: first) cout << el << " ";
    cout << second.size() << endl;
    sort(second.begin(),second.end(),greater<>());
    for(auto el: second) cout << el << " ";
    
    return 0;
}
