//
//  main.cpp
//  Educational Round - A
//
//  Created by S M HEMEL on 12/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int n,x;
int main(){
    cin >> n;
    while(n--)
    {
        cin >> x;
        if(x==3 || x==6 || x==7 || x==9 || x==10 || x==12 || x==13 || x==14 || x==15 || x==16 || x==17 || x==18 || x==19 || x==20 || x==21 || x==22 || x==23 || x==24 || (x>24 && x<101) )
            puts("YES");
        else puts("NO");
    }
    return 0;
}
