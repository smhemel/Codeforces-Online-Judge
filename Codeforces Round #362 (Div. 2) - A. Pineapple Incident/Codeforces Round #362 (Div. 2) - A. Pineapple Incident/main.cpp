//
//  main.cpp
//  Codeforces Round #362 (Div. 2) - A. Pineapple Incident
//
//  Created by S M HEMEL on 3/26/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    long long int t,s,x,ans = 0,i=1;
    cin >> t >> s >> x;
    if(t>x)
        return 0 * puts("NO");
    ans = t;
    if(ans==x)
        return 0 * puts("YES");
    while(ans<=x)
    {
        ans = t+(i*s);
        if(ans==x || ans+1==x)
            return 0 * puts("YES");
        i++;
    }
    puts("NO");
    return 0;
}
