//
//  main.cpp
//  Codeforces Round #467 (Div. 2) - B
//
//  Created by S M HEMEL on 25/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
int flag[(10000000>>6)+10];
#define isp(x)   ((x==2) || (x>1 && (x&1) && !check(x)))
#define check(x) (flag[x>>6] & (1<<((x>>1) & 31)))
#define sign(x)  (flag[x>>6] |=(1<<((x>>1) & 31)))
int prime[7000000];
int c = 0;
void sieve(int p)
{
    int i,j,k;
    sign(0);
    prime[c++]=2;
    for(i=3; i*i<=p; i+=2)
        if(!check(i))
            for(prime[c++]=i ,j=i*i ,k=(i<<1); j<=p; j+=k)
                sign(j);
    for( ; i<=p; i+=2)
        if(!check(i))
            prime[c++]=i;
}
bool call(int n,int temp){
    if(n<temp)
        return isp(n);
    for(int i=0; prime[i]<=temp && prime[i]*prime[i]<=n; i++){
        if(n%prime[i]==0)
            return false;
    }
    return true;
}
int main(){
    int n,m;
    cin >> n >> m;
    int temp = min(m,10000000);
    sieve(temp);
    for(int i=m; i>n; i--){
        if(call(i,n))
            return 0 * printf("%d\n",i);
    }
    puts("-1");
    return 0;
}

