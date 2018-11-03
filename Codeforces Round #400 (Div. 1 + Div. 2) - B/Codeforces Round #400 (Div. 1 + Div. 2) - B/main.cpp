//
//  main.cpp
//  Codeforces Round #400 (Div. 1 + Div. 2) - B
//
//  Created by S M HEMEL on 2/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <map>
#define N 100011
using namespace std;
bool check[N] = {0};
void sieve()
{
    int root = sqrt(N);
    for(int i=4; i<=100010; i+=2)
        check[i]=1;
    for(int i=3; i<root; i+=2)
        if(!check[i])
            for(int l=i*i; l<=N; l+=i*2)
                check[l] = 1;
}
int main()
{
    sieve();
    int n;
    cin >> n;
    if(n<=2)
    {
        cout << 1 << endl;
        if(n==1)
            cout << 1 << endl;
        else
            cout <<"1 1"<< endl;
        return 0;
    }
    cout << "2" << endl;
    for(int i=2; i<=n+1; i++){
        if(check[i]==1) cout<<2<<" ";
        else cout<<1<<" ";
    }
    cout<<endl;
    return 0;
}
