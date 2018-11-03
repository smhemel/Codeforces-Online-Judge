//
//  main.cpp
//  Codeforces Round #332 (Div. 2) - A. Patrick and Shopping
//
//  Created by S M HEMEL on 3/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int a,b,c,ans;
    cin >> a >> b >> c;
    ans = min(a,b);
    if((a+b)>=c) ans += c;
    else ans += (a+b);
    if((min(a,b)+c)<=max(a,b))
        ans += c+min(a,b);
    else ans += max(a,b);
    cout << ans << endl;
    return 0;
}
