//
//  main.cpp
//  Codeforces Round #379 (Div. 2)
//
//  Created by S M HEMEL on 11/15/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

/*#include <iostream>
using namespace std;
int main()
{
    int n,count=0,count1=0;
    char s[100000];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> s[i];
    for (int i=0; i<n; i++)
    {
        if(s[i]=='A') count++;
        if(s[i]=='D') count1++;
    }
    if(count>count1) cout << "Anton" <<endl;
    else if(count==count1) cout << "Friendship"<<endl;
    else if(count<count1) cout << "Danik" <<endl;
    return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
    int a[10],sum = 0,x1,x2,x3,x4;
    while (cin >> a[0] >> a[1] >> a[2] >>a[3])
    {
        x1 = a[0],x2 = a[1],x3 = a[2],x4 = a[3];
        if(x1==x2==x3==x4)
        {
            if(x1%2==1) cout << "256" <<endl;
            else
                cout << "32" <<endl;
            break;
        }
        for (int i=0; i<4; i++)
        {
            if(a[i]%2==1)
                sum+=256;
            else if(a[i]%2==0)
                sum+=32;
        }
        cout << sum <<endl;
    }
    return 0;
}
