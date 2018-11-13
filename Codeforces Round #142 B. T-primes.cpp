//
//  main.cpp
//  Codeforces Round #142 B. T-primes
//
//  Created by S M HEMEL on 11/30/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int n,m;
    cin >> n;
    while (n--)
    {
        cin >> m;
        int s = sqrt(m);
        if(s*s>s && s*s==m)
            cout << "YES" <<endl;
        else
            cout << "NO" <<endl;
    }
    return 0;
}*/

#include<iostream>
#include<math.h>
#define N 1000001
using namespace std;
//short arr[N]={};
int arr[N];
void t_prime()
{
    arr[2]=1;
    for(int i=3;i<N;i+=2)
        arr[i]=1;
        for(int i=3;i*i<N;i+=2)
            if(arr[i])
            {
                for(int j=3*i;j<N;j+=2*i)
                    arr[j]=0;
            }
}
int main()
{
    t_prime();
    long long sq,n,num;
    cin >> n;
    while(n--)
    {
        cin >> num;
        sq = sqrt(num);
        if(arr[sq] && sq*sq==num)
            cout << "YES" <<endl;
        else
            cout << "NO" <<endl;
    }
    return 0;
}
