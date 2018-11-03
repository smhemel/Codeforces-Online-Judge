//
//  main.cpp
//  RookieRank 3 - Max Score
//
//  Created by S M HEMEL on 5/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
long long int a[100000];
int main()
{
    int n;
    long long int sum = 0,cnt = 0;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],i++);
    for(int i=n-1; i>=0; i--){
        long long int rem = sum%a[i];
        sum += a[i];
        cnt +=rem;
    }
    cout << cnt << endl;
    return 0;
}
