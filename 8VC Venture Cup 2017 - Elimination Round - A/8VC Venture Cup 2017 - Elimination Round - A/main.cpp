//
//  main.cpp
//  8VC Venture Cup 2017 - Elimination Round - A
//
//  Created by S M HEMEL on 1/15/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#define N 9999999
using namespace std;
bool prime[N];
void seive()
{
    for(long long int i=4; i<N; i+=2)
        prime[i] = 1;
    int root = sqrt(N);
    for(long int i=3; i<=root; i+=2)
        if(!prime[i])
            for(long int l=i*i; l<=N; l+=i+i)
                prime[l]=1;
}
int main()
{
    seive();
    int n,ans,i;
    cin >> n;
    for(i=1; ; i++)
    {
        ans = 0;
        ans = (n*i)+1;
        if(prime[ans]==1)
            break;
    }
    cout << i << endl;
    return 0;
}
