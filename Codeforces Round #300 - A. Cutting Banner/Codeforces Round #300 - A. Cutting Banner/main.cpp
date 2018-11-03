//
//  main.cpp
//  Codeforces Round #300 - A. Cutting Banner
//
//  Created by S M HEMEL on 2/28/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    int n = (int)s.length();
    for (int i=0; i<n; i++)
        for (int j=i+1; j<=n; j++) {
            string t = "";
            for (int k=0; k<i; k++)
                t += s[k];
            for (int k=j; k<n; k++)
                t += s[k];
            if (t == "CODEFORCES") {
                cout << "YES";
                return 0;
            }
        }
    cout << "NO";
}
