//
//  main.cpp
//  Codeforces Round #276 (Div. 2) - B
//
//  Created by S M HEMEL on 7/14/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,x,y,Max = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        Max = max(Max,max(x,y));
    }
    cout << Max*Max << endl;
    return 0;
}
