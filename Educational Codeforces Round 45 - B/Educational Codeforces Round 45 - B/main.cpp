//
//  main.cpp
//  Educational Codeforces Round 45 - B
//
//  Created by S M HEMEL on 10/6/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long int
#include <utility>
using namespace std;
int ar[211111],br[111111];
int main(){
    int x,k;
    cin >> x >> k;
    for(int i=0; i<x; i++){
        cin >> ar[i];
    }
    bool f = true;
    for(int i=1; i<x; i++){
        if(ar[i-1]!=ar[i]) f = false;
    }
    if(f){
        cout << x << endl;
        return 0;
    }
    if(x==1) return 0 * puts("1");
    sort(ar,ar+x);
    for(int i=0,j=1; j<x; i++,j++){
        for(int k1 = j-1; k1>=0; k1--){
            if(ar[k1]==0) break;
            if(ar[k1]+k>=ar[j] && ar[j]>ar[k1]) ar[k1] = 0;
            else break;
        }
    }
    
    int cnt = 0;
    for(int i=0; i<x; i++)
        if(ar[i]) cnt++;
    cout << cnt << endl;
    return 0;
}
