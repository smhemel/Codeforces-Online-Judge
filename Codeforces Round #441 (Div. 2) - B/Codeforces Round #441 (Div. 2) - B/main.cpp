//
//  main.cpp
//  Codeforces Round #441 (Div. 2) - B
//
//  Created by S M HEMEL on 16/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <utility>
#include <map>
using namespace std;
vector<int> v;
int ar[100111];
int cnt[100111];
int main(){
    int n,k,m,x,p=0,Max = 0;
    cin >> n >> k >> m;
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
        x = ar[i]%m;
        cnt[x]++;
        if(Max<cnt[x]){
            Max = cnt[x];
            p = x;
        }
    }
    int c = 0;
    for(int i=0; i<n; i++){
        if(ar[i]==p || ar[i]%m==p){
            v.push_back(ar[i]);
            c++;
        }
        if(c==k)
            break;
    }
    if(v.size()==k)
        puts("Yes");
    else return 0 * puts("No");
    for(auto u: v)
        cout << u << " ";
    
    return 0;
}
