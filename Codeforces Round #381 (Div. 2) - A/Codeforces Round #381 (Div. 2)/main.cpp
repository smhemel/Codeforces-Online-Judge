//
//  main.cpp
//  Codeforces Round #381 (Div. 2)
//
//  Created by S M HEMEL on 11/23/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c,n;
    cin>>n>>a>>b>>c;
    n = n%4;
    ll k=0;
    if(n==1)
        k = min(min(c,b+a),3*a);
    else if(n==2)
        k = min(min(b,2*a),2*c);
    else if(n==3)
        k = min(min(a,b+c),3*c);
    cout<<k<<endl;
    return 0;
    
}

