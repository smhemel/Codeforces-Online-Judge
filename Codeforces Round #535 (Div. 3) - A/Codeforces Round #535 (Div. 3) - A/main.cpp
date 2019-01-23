//
//  main.cpp
//  Codeforces Round #535 (Div. 3) - A
//
//  Created by S M HEMEL on 23/1/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int x,a,b,c,d;
    cin >> x;
    while(x--){
        cin >> a >> b >> c >> d;
        if(b!=d) cout << b << " " << d << endl;
        else cout << a << " " << d << endl;
    }
    return 0;
}
