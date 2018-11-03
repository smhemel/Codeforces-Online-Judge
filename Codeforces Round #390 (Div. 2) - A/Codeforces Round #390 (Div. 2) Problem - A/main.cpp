//
//  main.cpp
//  Codeforces Round #390 (Div. 2) Problem - A
//
//  Created by S M HEMEL on 1/6/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//



#include<iostream>
using namespace std;
#define L long long int
const int M=1e5+10;
int n,arr[M],sum,can;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i])
            can = true;
        sum+=arr[i];
    }
    if(!can)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    if(sum)
    {
        cout<<1<<endl<<1<<" "<<n<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
        if(arr[i])
        {
            cout<<2<<endl<<1<<" "<<i+1<<endl<<i+2<<" "<<n<<endl;
            return 0;
        }
}
