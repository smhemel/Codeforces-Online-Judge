//
//  main.cpp
//  Codeforces Round #273 (Div. 2) A. Initial Bet
//
//  Created by S M HEMEL on 3/21/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int x,ans=0;
    for(int i=0; i<5; cin >> x,ans+=x,i++);
    if(ans%5==0 && ans>0) cout << (int)ans/5 << endl;
    else puts("-1");
    return 0;
}
