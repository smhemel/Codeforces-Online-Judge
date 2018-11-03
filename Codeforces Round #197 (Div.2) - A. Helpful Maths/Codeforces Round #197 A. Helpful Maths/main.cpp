//
//  main.cpp
//  Codeforces Round #197 A. Helpful Maths
//
//  Created by S M HEMEL on 11/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

/*#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    char s[10000],s1[10000];
    while (cin >> s)
    {
        int len = (int) strlen(s);
        for (int i=0,l=0; i<len; i++)
            if(s[i]!='+'){
                s1[l]=s[i];
                l++;
            }
        int len1 = (int) strlen(s1);
        sort(s1,s1+len1);
        cout << s1[0];
        for (int i=1; i<len1; i++)
            cout <<"+"<<s1[i];
        cout << endl;
        memset(s1,NULL, sizeof(s1));
        memset(s,NULL, sizeof(s));
    }
    return 0;
}*/

#include <iostream>
using namespace std;
int a[105],n,i=2;
int main()
{
    while(cin>>a[n++]);
    sort(a,a+n);
    cout<<a[1];
    for(;i<n;i++)
        cout<<'+'<<a[i];
}
