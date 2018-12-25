//
//  main.cpp
//  Codeforces Round #260 (Div. 2) - B. Fedya and Maths
//
//  Created by S M HEMEL on 11/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    string n;
    int Pow = 0;
    cin >> n;
    for(int i=0; i<n.size(); i++){
        Pow = Pow*10 + (n[i]-'0');
        Pow %= 4 ;
    }
    int res  = 0 ;
    for(int i = 1 ; i < 5 ; i++){
        res += (int)pow(i,1.0*Pow);
        res %= 5;
    }
    cout << res << endl ;
}
