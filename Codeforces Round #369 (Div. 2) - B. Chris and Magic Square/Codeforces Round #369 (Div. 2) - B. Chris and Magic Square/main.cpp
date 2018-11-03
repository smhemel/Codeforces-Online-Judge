//
//  main.cpp
//  Codeforces Round #369 (Div. 2) - B. Chris and Magic Square
//
//  Created by S M HEMEL on 5/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
long long int a[600][600];
long long int store[10000];
int main()
{
    int n,p=0,p1=0;
    cin >> n;
    for(int i=0; i<n; i++)
        for(int l=0; l<n; l++)
        {
            cin >> a[i][l];
            if(a[i][l]==0)
                p = i,p1 = l;
        }
    if(n==1)
        return 0 * puts("1");
    int k=0;
    for(int i=0; i<n; i++){
        long long int x = 0;
        if(i==p)
            continue;
        for(int l=0; l<n; l++){
            x += a[i][l];
        }
        store[k++] = x;
    }
    for(int i=0; i<n; i++){
        long long int x = 0;
        if(i==p1)
            continue;
        for(int l=0; l<n; l++){
            x += a[l][i];
        }
        store[k++] = x;
    }
    bool flag = true;
    long long int t = 0,t1 = 0;
    for(int i=0,l=0; i<n; i++,l++){
        if(i==p && l==p1){
            flag = false;
            break;
        }
         t += a[i][l];
    }
    if(flag && t!=0)
        store[k++] = t;
    bool flag1 = true;
    for(int i=0,l=n-1; i<n; i++,l--){
        if(i==p && l==p1){
            flag1 = false;
            break;
        }
        t1 += a[i][l];
    }
    if(flag1 && t1!=0)
        store[k++] = t1;
    for(int i=0; i<k-1; i++)
        if(store[i]!=store[i+1])
            return 0 * puts("-1");
    long long int z = 0,z1 = 0,z2 = 0,z3 = 0;
    for(int i=0; i<n; i++)
        z += a[p][i];
    for(int i=0; i<n; i++)
        z1 += a[i][p1];
    if(z>store[0] || z1>store[0])
        return 0 * puts("-1");
    long long int temp = 0;
    if(z!=z1)
        return 0 * puts("-1");
    temp = store[0]-z;
    if(!temp)
        return 0 * puts("-1");
    a[p][p1] = temp;
    if(!flag){
        for(int i=0,l=0; i<n; i++,l++)
            z2 += a[i][l];
    }
    else
        z2 = t;
    if(!flag1){
        for(int i=0,l=n-1; i<n; i++,l--)
            z3 += a[i][l];
    }
    else
        z3 = t1;
    if(z3!=z2)
        return 0 * puts("-1");
    cout << temp << endl;
    return 0;
}
