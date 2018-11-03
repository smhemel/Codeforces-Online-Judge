//
//  main.cpp
//  Codeforces Round #269 (Div. 2) - B. MUH and Important Things
//
//  Created by S M HEMEL on 19/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <utility>
#include <map>
#include <algorithm>
#include <cstdio>
using namespace std;
int arr[2001];
int main()
{
    int n,mark = 0;
    pair <int,int> a[2001];
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> a[i].first;
        arr[a[i].first]++;
        if (arr[a[i].first]>=2)
            mark += arr[a[i].first];
        a[i].second = i;
    }
    if(mark<3)
        return 0 * puts("NO");
    sort(a+1,a+n+1);
    
    if(mark>=3)
    {
        puts("YES");
        for (int k=1; k<=3; k++) {
            int temp = k;
            for (int i=1; i<=n; i++) {
                cout << a[i].second << " ";
                if (a[i].first==a[i-1].first && temp>0){
                    swap(a[i],a[i-1]);
                    temp--;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
