//
//  main.cpp
//  2017-2018 ACM-ICPC, NEERC, Southern Subregional Contest (Online Mirror, ACM-ICPC Rules, Teams Preferred)
//
//  Created by S M HEMEL on 21/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;
int main(){
    int x,y,x1,y1;
    cin >> x >> y >> x1 >> y1;
    long long int ans = 0;
    if(abs(x-x1)==0)
        ans += 2;
    else
        ans += abs(x-x1)+1;
    if(abs(y-y1)==0)
        ans += 2;
    else
        ans += abs(y-y1)+1;
    ans *= 2;
    cout << ans << endl;
    return 0;
}
