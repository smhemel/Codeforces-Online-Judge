//
//  main.cpp
//  Codeforces Round #366 (Div. 2) - A. Hulk
//
//  Created by S M HEMEL on 4/4/17.
//  Copyright © 2017 Bangladesh University of Business and Technology. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        if(i==n){
            if(i&1) return 0 * puts("I hate it");
            else return 0 * puts("I love it");
        }
        if(i&1) cout <<"I hate that ";
        else cout <<"I love that ";
    }
    return 0;
}
