//
//  main.cpp
//  Codeforces Round #249 (Div. 2) - A. Queue on Bus Stop
//
//  Created by S M HEMEL on 3/28/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int a[100];
int main()
{
    int n,m,cnt = 0;
    cin >> n >> m;
    for(int i=0; i<n; cin >> a[i],i++);
    int temp = 0;
    if(n==1)
        return 0 * puts("1");
    for(int i=0; i<n; i++)
    {
        if((temp+a[i])<m){
            if(i==(n-1)){
                cnt++;
                cout << cnt << endl;
                return 0;
            }
            temp += a[i];
            continue;
        }
        if((temp+a[i])>m){
            temp = a[i],cnt++;
            if(i==(n-1)){
                cnt++;
                cout << cnt << endl;
                return 0;
            }
            continue;
        }
        if((temp+a[i])==m){
            temp = 0,cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
