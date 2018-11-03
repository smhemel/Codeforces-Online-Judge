//
//  main.cpp
//  Codeforces Round #415 (Div. 2) - B
//
//  Created by S M HEMEL on 5/21/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
vector <int> v;
int main()
{
    long long int n,f,v1,v2,k=0,ans=0;
    cin >> n >> f;
    for(int i=0; i<n; i++){
        cin >> v1 >> v2;
        long long int m = min(v1,v2);
        ans += m;
        k++;
        v.push_back(min((long long int)((2*v1)-m),(long long int)(v2-m)));
    }
    sort(v.begin(),v.end());
    k--;
    while(f!=0){
        ans += v[k];
        if(!k) break;
        k--;
        f--;
    }
    cout << ans << endl;
    return 0;
}
