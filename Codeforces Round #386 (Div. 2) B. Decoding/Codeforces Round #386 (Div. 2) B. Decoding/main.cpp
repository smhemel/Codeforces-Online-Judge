//
//  main.cpp
//  Codeforces Round #386 (Div. 2) B. Decoding
//
//  Created by S M HEMEL on 12/18/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    char s[3000],s1[3000];
    memset(s1,0, sizeof(s1));
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> s[i];
    int count=0,j=1;
    if (n%2==1)
    {
        s1[n/2] = s[0];
        for (int i=1,l=n/2; i<n; i++)
        {
            if(i%2==1){
                s1[l-j] = s[i];
                count++;
            }
            if(i%2==0){
                s1[l+j]=s[i];
                count++;
            }
            if(count==2)
            {
                count = 0;
                j++;
            }
        }
    }
    else
    {
        int l=0;
        for (int i=(n-1); i>=0; i--)
            if(i%2==0 || i==0)
                s1[l++]=s[i];
        for (int i=1; i<n; i++)
            if(i%2==1)
                s1[l++] = s[i];
    }
    for(int i=0; i<n; i++)
        cout << s1[i];
    cout <<endl;
    return 0;
}
