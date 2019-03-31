//
//  main.cpp
//  Codeforces Round #549 (Div. 2) - A
//
//  Created by S M HEMEL on 31/3/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll ar[211111];
ll a,b,c,x,y,z,n,m,k,d;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> ar[i];
        if(ar[i]==0) a++;
        else b++;
    }
    for(int i=0; i<n; i++){
        if (ar[i] == 0)
            x++;
        else
            y++;
        if(x==a || y==b) return 0 * printf("%d\n",i+1);
    }
    return 0;
}
