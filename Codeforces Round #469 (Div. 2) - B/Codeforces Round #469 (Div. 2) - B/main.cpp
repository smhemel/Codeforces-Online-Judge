//
//  main.cpp
//  Codeforces Round #469 (Div. 2) - B
//
//  Created by S M HEMEL on 9/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
const int maxn = 1000003;
int n, m, a[maxn], b[maxn];
int main()
{
    cin >> n >> m;
    for(int i=0; i<n; cin >> a[i],i++);
    for(int i=0; i<m; cin >> b[i],i++);
    long long total = 0, total1 = 0,ans = 0;
    for(int i=0, j=0; i<n || j<m; ans++) {
        do{
            if(i==n || (j<m && total+a[i]>total1+b[j]))
                total1 += b[j++];
            else
                total += a[i++];
        }while (total != total1);
    }
    cout << ans << endl;
    return 0;
}
