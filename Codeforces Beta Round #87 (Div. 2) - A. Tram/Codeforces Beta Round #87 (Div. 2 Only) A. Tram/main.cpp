//
//  main.cpp
//  Codeforces Beta Round #87 (Div. 2 Only) A. Tram
//
//  Created by S M HEMEL on 12/21/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,a,b,ans=0,max = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        ans = abs(ans-a);
        ans = abs(ans+b);
        if(max<ans)
            max=ans;
    }
    cout << max << endl;
    return 0;
}
