//
//  main.cpp
//  Codeforces Round #495 (Div. 2) - A
//
//  Created by S M HEMEL on 8/7/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int ar[2111];
map<int,int>M;
int main() {
    int n,k,cnt = 2;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    sort(ar,ar+n);
    for(int i=0; i<n-1; i++){
        if (ar[i+1]-ar[i] == k*2)
            cnt++;
        else if (ar[i+1]-ar[i]> k*2)
            cnt += 2;
    }
    cout << cnt << endl;
    return 0;
}
