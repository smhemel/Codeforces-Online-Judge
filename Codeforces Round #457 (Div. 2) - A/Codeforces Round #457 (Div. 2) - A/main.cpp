//
//  main.cpp
//  Codeforces Round #457 (Div. 2) - A
//
//  Created by S M HEMEL on 19/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#define ll long long int
using namespace std;
int main(){
    int x,h,m,cnt=0;
    cin >> x >> h >> m;
    while(h%10!=7 && m%10!=7){
        cnt++;
        m-=x;
        if(m<0){
            m += 60;
            h--;
        }
        if(h<0) h += 24;
    }
    cout << cnt << endl;
    return 0;
}
