//
//  main.cpp
//  Codeforces Round #322 (Div. 2) - B. Luxurious Houses
//
//  Created by S M HEMEL on 21/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector <long long> v;
int a[1000000];
int main()
{
    long long n,Max = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    bool flag = true;
    for(long long i=n-1; i>=0; i--){
        if(Max==a[i]){
            v.push_back(1);
            flag = false;
            continue;
        }
        if(Max<a[i]){
            v.push_back(0);
            Max = a[i];
            continue;
        }
        else
            v.push_back((long long)(abs(Max-a[i])+1));
    }
    for(long long i=(int)v.size()-1; i>=0; i--)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}
