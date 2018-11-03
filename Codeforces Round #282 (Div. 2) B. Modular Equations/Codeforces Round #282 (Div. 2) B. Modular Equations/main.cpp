//
//  main.cpp
//  Codeforces Round #282 (Div. 2) B. Modular Equations
//
//  Created by S M HEMEL on 6/25/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define check(x) (flag[x>>6] & (1<<((x>>1) & 31)))
#define setup(x)  (flag[x>>6] |=(1<<((x>>1) & 31)))
const int M = 10000000;
int flag[(M>>6)+10];
int prime[800000];
int c = 0;
void sieve(void)
{
    int i,j,k;
    int root = sqrt(M)+1;
    setup(0);
    prime[c++]=2;
    for(i=3; i<=root; i+=2)
        if(!check(i))
            for(prime[c++]=i ,j=i*i ,k=(i<<1) ; j<=M ; j+=k)
                setup(j);
    for( ; i<=M; i+=2)
        if(!check(i))
            prime[c++]=i;
}
int prime_factor[1000000];
int main()
{
    sieve();
    int n,m,cnt = 1,k=0;
    cin >> n >> m;
    if(n<=m)
        return 0 * puts("infinity");
    n = n-m;
    int n1 = n;
    for(int i=0; prime[i]*prime[i]<=n1; i++){
        if(n1%prime[i]==0){
            while(n1%prime[i]==0){
                prime_factor[k++] = prime[i];
                n1 /= prime[i];
            }
        }
        if(!check(n1)){
            prime_factor[k++] = n1;
            break;
        }
    }
    int t = prime_factor[0];
    for(int i=1; i<k; i++){
        if(t==prime_factor[i]){
            prime_factor[i] = prime_factor[i-1]*prime_factor[i];
        }
        else
            t = prime_factor[i];
    }
    
    cout << cnt << endl;
    return 0;
}
