//
//  main.cpp
//  Codeforces Round #443 (Div. 2) - A
//
//  Created by S M HEMEL on 26/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,x,y;
    cin >> n;
    int ans = 0;
    while (n--) {
        cin >> x >> y;
        if(ans<x)
            ans = x;
        else{
            while(x<=ans)
                x = x+y;
            ans = x;
        }
    }
    cout << ans << endl;
    return 0;
}
