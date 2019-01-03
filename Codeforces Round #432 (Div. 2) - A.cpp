//
//  main.cpp
//  Codeforces Round #432 (Div. 2) - A
//
//  Created by S M HEMEL on 4/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    int n,k,t;
    cin >> n >> k >> t;
    if(k>t)
        return 0 * printf("%d\n",t);
    else if(t>n){
        printf("%d\n",k-(t-n));
        return 0;
    }
    else{
        printf("%d\n",k);
    }
    return 0;
}
