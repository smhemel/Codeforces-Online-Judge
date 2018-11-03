//
//  main.cpp
//  Educational Codeforces Round 21 - A. Lucky Year
//
//  Created by S M HEMEL on 5/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    if(n<10)
        return 0 * puts("1");
    else{
        string s1="";
        string s = to_string(n);
        long long int len = (int)s.length();
        int temp = ((s[0]-'0')+1);
        if((temp-1)==9){
            len++;
            s1 += "1";
        }
        else
            s1 += (temp+'0');
        for(int i=1; i<len; i++)
            s1 += "0";
        long long n1 = stol(s1);
        cout << (n1-n) << endl;
    }
    return 0;
}
