//
//  main.cpp
//  Codeforces Round #373 (Div. 2) - A. Vitya in the Countryside
//
//  Created by S M HEMEL on 6/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int ar[99];
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> ar[i];
    if(n==1) {
        if(ar[0]==0) return 0 * puts("UP");
        if(ar[0]==15) return 0 * puts("DOWN");
        return 0 * puts("-1");
    }
    if(ar[n-1]==0) return 0 * puts("UP");
    if(ar[n-1]==15) return 0 * puts("DOWN");
    if(ar[n-1]>ar[n-2]) cout << "UP" << endl;
    else cout << "DOWN" << endl;
    return 0;
}
