//
//  main.cpp
//  Educational Codeforces Round 19 - B. Odd sum
//
//  Created by S M HEMEL on 5/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int a[100000];
int main()
{
    int n,x;
    long long int sum = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        a[i] = abs(x);
        if(x>0)
            sum += x;
    }
    if(sum%2)
        return 0 * printf("%lld\n",sum);
    sort(a,a+n);
    for(int i=0; i<n; i++)
        if((sum-a[i])%2!=0)
            return 0 * printf("%lld\n",sum-a[i]);
    return 0;
}
