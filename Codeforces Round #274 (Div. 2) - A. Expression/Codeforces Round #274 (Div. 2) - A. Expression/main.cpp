//
//  main.cpp
//  Codeforces Round #274 (Div. 2) - A. Expression
//
//  Created by S M HEMEL on 4/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a==1 || b==1 || c==1)
    {
        int ans=0;
        ans = max(ans,(a+b)*c);
        ans = max(ans,(b+c)*a);
        ans = max(ans,(b+a)*c);
        ans = max(ans,a+b+c);
        ans = max(ans,a*b*c);
        ans =  max(ans,a*b+c);
        ans = max(ans,a*c+b);
        ans = max(ans,b*c+a);
        cout << ans << endl;
    }
    else
        cout << a*b*c << endl;
    return 0;
}
