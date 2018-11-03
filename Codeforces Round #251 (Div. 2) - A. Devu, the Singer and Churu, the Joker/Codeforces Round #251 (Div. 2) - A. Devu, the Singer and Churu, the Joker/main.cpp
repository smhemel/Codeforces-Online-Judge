//
//  main.cpp
//  Codeforces Round #251 (Div. 2) - A. Devu, the Singer and Churu, the Joker
//
//  Created by S M HEMEL on 3/28/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int a[1000];
int main()
{
    int n,d,spend = 0,cnt = 0,sum = 0;
    cin >> n >> d;
    for(int i=0; i<n; cin >> a[i],sum+=a[i],i++);
    spend += 10*(n-1)+sum;
    if(spend>d) puts("-1");
    else {
        cnt += (n-1)*2;
        cnt += floor((d-spend)/5);
        cout << cnt << endl;
    }
    return 0;
}
