//
//  main.cpp
//  Codeforces Round #252 (Div. 2) - A. Valera and Antique Items
//
//  Created by S M HEMEL on 3/28/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
set <int> s;
struct classcomp{
    bool operator()(const int& a,const int& b) {
        return a<b;
    }
};
int main()
{
    int n,v;
    cin >> n >> v;
    for(int i=1; i<=n; i++)
    {
        int m;
        bool flag = false;
        cin >> m;
        for(int i=0; i<m; i++)
        {
            int t;
            cin >> t;
            if(t<v)
                flag = true;
        }
        if(flag) s.insert(i);
    }
    cout << s.size() << endl;
    set<int,classcomp>::iterator it;
    for(it=s.begin(); it!=s.end(); it++)
        cout << *it << " ";
    cout << endl;
    return 0;
}
