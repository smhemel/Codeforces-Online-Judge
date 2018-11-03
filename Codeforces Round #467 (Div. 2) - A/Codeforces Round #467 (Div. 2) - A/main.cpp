//
//  main.cpp
//  Codeforces Round #467 (Div. 2) - A
//
//  Created by S M HEMEL on 25/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
map<int,int> M;
int main(){
    int n,x,cnt = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x==0)
            continue;
        if(M[x]!=1){
            cnt++;
            M[x] = 1;
        }
    }
    cout << cnt << endl;
    return 0;
}








