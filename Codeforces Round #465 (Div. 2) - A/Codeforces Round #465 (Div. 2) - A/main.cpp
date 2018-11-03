//
//  main.cpp
//  Codeforces Round #465 (Div. 2) - A
//
//  Created by S M HEMEL on 19/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#define ll long long int
#define Siz 111111
using namespace std;
string s;
int main(){
    int n,cnt = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(n%i==0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}


