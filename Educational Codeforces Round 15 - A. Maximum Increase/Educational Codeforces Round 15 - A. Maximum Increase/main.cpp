//
//  main.cpp
//  Educational Codeforces Round 15 - A. Maximum Increase
//
//  Created by S M HEMEL on 4/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,t,x,cnt = 0,Max = 0;
    cin >> n;
    cin >> t;
    for(int i=1; i<n; i++){
        cin >> x;
        if(t<x){
            cnt++;
            t = x;
        }
        else{
            cnt = 0;
            t = x;
        }
        if(Max<cnt)
            Max = cnt;
    }
    cout << Max+1 << endl;
    return 0;
}
