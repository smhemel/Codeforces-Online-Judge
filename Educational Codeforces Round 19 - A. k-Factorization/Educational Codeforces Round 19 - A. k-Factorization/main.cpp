//
//  main.cpp
//  Educational Codeforces Round 19 - A. k-Factorization
//
//  Created by S M HEMEL on 4/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int a[100];
int main(){
    int n,k,l=0;
    cin >> n >> k;
    int temp = k;
    if(k==1)
        return 0 * printf("%d\n",n);
    int i=2;
    for(; i<=ceil(n/2)+1;)
    {
        if(n%i==0)
        {
            k--;
            a[l++] = i;
            n/=i;
            if(n==1)
                n = 0;
            i = 2;
        }
        else {
            i++;
            continue;
        }
        if(n==0)
            break;
        if(k==1){
            k--;
            a[l++] = n;
            break;
        }
    }
    if(l!=temp || k!=0)
        return 0 * puts("-1");
    for(int i=0; i<l; i++)
        cout << a[i] << " ";
    return 0;
}
