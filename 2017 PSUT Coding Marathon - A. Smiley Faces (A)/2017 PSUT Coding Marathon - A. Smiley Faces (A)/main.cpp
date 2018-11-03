//
//  main.cpp
//  2017 PSUT Coding Marathon - A. Smiley Faces (A)
//
//  Created by S M HEMEL on 10/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c,ans = 0;
    cin >> a >> b >> c;
    ans += a/2;
    ans += b;
    cout << min(ans,c) << endl;
    return 0;
}
