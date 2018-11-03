//
//  main.cpp
//  Codeforces Round #389 (Div. 2) - (B) Santa Claus and Keyboard Check
//
//  Created by S M HEMEL on 1/23/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

/*#include <iostream>
#include <map>
#include <string>
using namespace std;
using namespace std;
int cnt;
string p,q;
map<char,char>c;
int main()
{
    cin>>p>>q;
    for(int i=0;i<p.size();i++)
    {
        if((c[q[i]]!=0 || c[p[i]]!=0) && (c[q[i]]!=p[i] || c[p[i]]!=q[i]))
        {
            cout << -1 << endl;
            return 0;
        }
        if(c[q[i]]==0 && p[i]!=q[i]) {
            cnt++;
            c[q[i]]=p[i];
            c[p[i]]=q[i];
        }
    }
    cout<<cnt<<endl;
    for(char t='a';t<='z';t++)
        if(c[t]!=0 && c[t]!=t)
        {
            cout<<t<<' '<<c[t]<<endl;
            c[c[t]]=0;
        }
    return 0;
}*/



#include <stdio.h>
char P[999],X[128],S[999],A[99],p,s;
int i,c;
int main()
{
    bool flag = true;
    for(scanf("%s%s",P,S);p=P[i],s=S[i];i++)
    {
        if((X[s]!=0 && (X[p]-s)!=0) || (X[p]!=0 && (X[p]-s)!=0))
        {
            c=-4;
            flag =false;
            break;
        }
        if(p==s) X[p] = s;
        if(X[s]==0 && (p-s)!=0)
        {
            A[c++]=s,A[c++]=32,A[c++]=p,A[c++]=10;
            X[s]=p;
            X[p]=s;
        }
    }
    printf("%d\n",c/4);
    if(c>0 && flag==true)
        printf("%s", A);
}
