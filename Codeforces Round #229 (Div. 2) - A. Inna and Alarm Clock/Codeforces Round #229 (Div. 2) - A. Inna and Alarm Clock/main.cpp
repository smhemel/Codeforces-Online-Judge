//
//  main.cpp
//  Codeforces Round #229 (Div. 2) - A. Inna and Alarm Clock
//
//  Created by S M HEMEL on 3/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> s1,s2;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        s1.insert(x);
        s2.insert(y);
    }
    cout << min(s1.size(),s2.size()) << endl;
    return 0;
}
