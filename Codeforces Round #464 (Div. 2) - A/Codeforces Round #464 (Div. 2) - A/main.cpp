//
//  main.cpp
//  Codeforces Round #464 (Div. 2) - A
//
//  Created by S M HEMEL on 17/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#define ll long long int
using namespace std;
int ar[5555];
map<int,int> M,M1;
int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> ar[i];
        M[i] = ar[i];
        M1[ar[i]] = i;
    }
    for(int i=1; i<=n; i++){
        if(ar[i]==i) continue;
        int a = ar[i];
        int b = ar[a];
        if(ar[b]==i)
            return 0 * puts("YES");
    }
    puts("NO");
    return 0;
}
