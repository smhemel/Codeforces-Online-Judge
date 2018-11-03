//
//  main.cpp
//  Codeforces Round #402 (Div. 2) - C. Dishonest Sellers
//
//  Created by S M HEMEL on 5/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int a[220000],b[220000];
int main()
{
    int n,m;
    long long int sum = 0;
    cin >> n >> m;
    for(int i=0; i<n; cin >> a[i],i++);
    for(int i=0; i<n; i++){
        cin >> b[i];
        if(a[i]<=b[i]){
            sum += a[i];
            continue;
        }
        if(abs(a[i]-b[i])==1 && m)
        {
            sum += a[i];
            m--;
            continue;
        }
        sum += b[i];
    }
    cout << sum << endl;
    return 0;
}
