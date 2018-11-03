//
//  main.cpp
//  Codeforces Round #490 (Div. 3) - A
//
//  Created by S M HEMEL on 28/6/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int a[2111];
int main(){
    int n,m,cnt=0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    bool f = true,f1 = true;
    for(int i=0,j=n-1; i<=j;){
        if(a[i]>m) f1 = false;
        if(a[i]<=m){cnt++;i++;}
        if(i-1==j || j+1==i) break;
        if(a[j]>m) f = false;
        if(a[j]<=m){
            cnt++;j--;
        }
        if(!f && !f1) break;
    }
    cout << cnt << endl;
    return 0;
}
