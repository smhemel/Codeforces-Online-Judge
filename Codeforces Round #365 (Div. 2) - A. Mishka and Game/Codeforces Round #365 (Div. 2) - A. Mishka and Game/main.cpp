//
//  main.cpp
//  Codeforces Round #365 (Div. 2) - A. Mishka and Game
//
//  Created by S M HEMEL on 4/4/17.
//  Copyright © 2017 Bangladesh University of Business and Technology. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,cnt = 0;
    cin >> n;
    int x,y;
    while (n--)
    {
        cin >> x >> y;
        if(x==y) continue;
        if(x>y)
            cnt++;
        else
            cnt--;
    }
    cout << (cnt<=0 ? (cnt==0 ? "Friendship is magic!^^" : "Chris") : "Mishka") << endl;
    return 0;
}
