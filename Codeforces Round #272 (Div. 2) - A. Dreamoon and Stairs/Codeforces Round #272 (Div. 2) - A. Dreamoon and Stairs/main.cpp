//
//  main.cpp
//  Codeforces Round #272 (Div. 2) - A. Dreamoon and Stairs
//
//  Created by S M HEMEL on 4/25/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int div = 0 ;
    if(n==1)
        return 0 * puts("-1");
    if(n&1)
        div = (n/2)+1;
    else
        div = n/2;
    if(div%k==0)
        return 0 * printf("%d\n",div);
    while(true){
        div = (div-1)+2;
        if(div%k==0)
            return 0 * printf("%d\n",div);
        if(div==n)
            return 0 * puts("-1");
    }
    return 0;
}
