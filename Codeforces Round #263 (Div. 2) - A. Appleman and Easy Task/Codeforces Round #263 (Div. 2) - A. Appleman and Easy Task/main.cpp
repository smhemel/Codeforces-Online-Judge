//
//  main.cpp
//  Codeforces Round #263 (Div. 2) - A. Appleman and Easy Task
//
//  Created by S M HEMEL on 2/21/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string s1,s2,s3;
int main()
{
    int n;
    cin >> n;
    for(int i=0 ; i<n; cin>>s1,s2 += s1,i++);
    s3 = s2;
    reverse(s3.begin(),s3.end());
    cout << ((s2 == s3) ? "YES" : "NO") <<endl;
    return 0;
}
