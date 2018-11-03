//
//  main.cpp
//  Codeforces Round #507 (Div. 2) - B
//
//  Created by S M HEMEL on 5/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <map>
#define ll long long int
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for(int i=1; i<=n; i += 2*k+1)
        a.push_back(i);
    int x=0;
    if (a[a.size()-1] + k < n)
        x = n-(a[a.size()-1]+k);
    cout << a.size() << endl;
    for (auto i: a)
        cout << i+x << " ";
    return 0;
}
