//
//  main.cpp
//  Codeforces Round #452 (Div. 2) - B
//
//  Created by S M HEMEL on 17/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int m[] = {31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
int a[111];
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],i++);
    for(int i=0; i<108-n+1; i++){
        bool f = true;
        for(int l=0,j=i; l<n && j<108; l++,j++){
            if(a[l]!=m[j]){
                f = false;
                break;
            }
        }
        if(f==true) return 0 * puts("YES");
    }
    puts("NO");
    return 0;
}
