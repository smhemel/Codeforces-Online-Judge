//
//  main.cpp
//  Codeforces Round #256 (Div. 2) - B. Suffix Structures
//
//  Created by S M HEMEL on 4/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s,t;
int main()
{
    cin >> s >> t;
    string s1 = s;
    string t1 = t;
    sort(s1.begin(),s1.end());
    sort(t1.begin(),t1.end());
    for(int i=0,l=0; s1[i]; l++){
        if(t1[i]==s1[l]){
            t1[i] = '.';
            i++;
        }
    }
    cout << s << " ";
    for(int i=0; t1[i]; i++)
    {
        if(t1[i]!='.')
        {
            for(int l=0; t[l]; l++){
                if(t1[i]==t[l])
                {
                    cout << t[l];
                    break;
                }
            }
        }
    }
    cout << endl;
    return 0;
}
