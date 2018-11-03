//
//  main.cpp
//  Codeforces Round #164 (Div. 2) - A. Games
//
//  Created by S M HEMEL on 2/24/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int a[n], h[n], cnt = 0;
        for(int i=0; i<n; cin >> h[i] >> a[i],i++);
        for(int i=0; i<n; ++i)
            for(int j = i+1; j<n; ++j)
            {
                if(h[i] == a[j]) ++cnt;
                if(a[i] == h[j]) ++cnt;
            }
        cout << cnt <<endl;;
    }
    return 0;
}
