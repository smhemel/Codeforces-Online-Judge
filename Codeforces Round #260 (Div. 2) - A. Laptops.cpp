//
//  main.cpp
//  Codeforces Round #260 (Div. 2) - A. Laptops
//
//  Created by S M HEMEL on 2/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x,y;
    bool flag = true;
    for(int i=0; i<n; i++)
    {
        flag = true;
        cin >> x >> y;
        if(x==y)
            flag = false;
        if(x!=y){
            cout << "Happy Alex" <<endl;
            return 0;
        }
    }
    cout << ((flag==false) ? "Poor Alex" : "Happy Alex") <<endl;
    return 0;
}
