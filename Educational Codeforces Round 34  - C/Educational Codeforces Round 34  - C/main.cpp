//
//  main.cpp
//  Educational Codeforces Round 34  - C
//
//  Created by S M HEMEL on 12/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
int a[100011];
map<int,int> M;
vector<int> v;
int Max = 0;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        M[a[i]]++;
        v.push_back(a[i]);
        if(Max<M[a[i]])
            Max = M[a[i]];
    }
    sort(a,a+n);
    sort(v.begin(),v.end());
    int c = 0;
    for(int k=0; k<Max; k++){
        int len = (int)v.size();
        for(int i = len-1; i>=0; i--){
            if(M[v[i]]==0) continue;
            M[v[i]]--;
        }
        c++;
    }
    int len = (int)v.size();
    for(int i = len-1; i>=0; i--){
        if(M[v[i]]>0) c++;
    }
    cout << c << endl;
    return 0;
}
