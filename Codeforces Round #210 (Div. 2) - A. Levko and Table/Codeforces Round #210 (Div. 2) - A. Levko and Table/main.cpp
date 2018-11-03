//
//  main.cpp
//  Codeforces Round #210 (Div. 2) - A. Levko and Table
//
//  Created by S M HEMEL on 3/30/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int l=0; l<n; l++)
            if(i==l)
                cout << m << " ";
            else
                cout << "0" << " ";
        cout << endl;
    }
    return 0;
}
