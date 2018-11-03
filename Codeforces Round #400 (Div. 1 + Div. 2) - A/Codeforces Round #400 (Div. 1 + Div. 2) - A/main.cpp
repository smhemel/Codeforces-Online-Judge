//
//  main.cpp
//  Codeforces Round #400 (Div. 1 + Div. 2) - A
//
//  Created by S M HEMEL on 2/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

/*#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <map>
using namespace std;
map <string, int> m;
string s[1000000];
int main()
{
    string s1,s2,s3,s4;
    string c;
    cin >> s1 >> s2;
    cout << s1 << " " << s2 << endl;
    int n;
    cin >> n;
    while (n--) {
        cin >> s3 >> s4;
        if(s3==s1){
            cout << s4 << " " << s2 << endl;
            s1 = s4;
            s2 = s2;
            continue;
        }
        else if(s3==s2)
        {
            cout << s1 << " " << s4 << endl;
            s1 = s1;
            s2 = s4;
            continue;
        }
        else if(s4==s1)
        {
            cout << s3 << " " << s2 << endl;
            s1 = s3;
            s2 = s2;
            continue;
        }
        else if(s4==s2)
        {
            cout << s1 << " " << s3 << endl;
            s1 = s1;
            s2 = s3;
            continue;
        }
    }
    return 0;
}*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s,s1,s2,s3;
    cin >> s >> s1;
    int n;
    cin >> n;
    cout << s << " " << s1 << endl;
    while (n--)
    {
        cin >> s2 >> s3;
        if(s2==s)
        {
            cout << s1 << " " << s3 << endl;
            s = s3;
        }
        else
        {
            cout << s << " " << s3 << endl;
            s1 = s3;
        }
    }
    return 0;
}
