//
//  main.cpp
//  Codeforces Round #447 (Div. 2) - B. Ralph And His Magic Field
//
//  Created by S M HEMEL on 19/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int a[1111];
int m;
int __gcd(int n1, int n2)
{
    if (n2 != 0) return __gcd(n2, n1 % n2);
    else return n1;
}
bool __minus(){
    for(int i=0; i<m; i++)
        for(int l=i+1; l<m; l++)
            if(__gcd(a[i],a[l])==a[i] || __gcd(a[i],a[l])==a[l])
                 return false;
    return true;
}
int main(){
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> a[i];
    }
    if(__minus()){
        return 0 * puts("-1");
    }
    while(true){
        bool f = true;
        for(int i=0; i<m; i++){
            if(a[i]==0) continue;
            for(int l=i+1; l<m; l++){
                if(a[l]==0)
                    continue;
               if(__gcd(a[i],a[l])==a[i] || __gcd(a[i],a[l])==a[l]){
                    if(__gcd(a[i],a[l])==a[i])
                        a[i] = 0;
                   else
                       a[l] = 0;
                   f = false;
                   break;
                }
            }
            if(f==false) break;
        }
        if(f) break;
    }
    for(int i=0; i<m; i++)
        cout << a[i] << " ";
    return 0;
}
