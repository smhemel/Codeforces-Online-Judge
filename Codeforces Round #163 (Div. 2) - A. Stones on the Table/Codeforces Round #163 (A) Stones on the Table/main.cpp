//
//  main.cpp
//  Codeforces Round #163 (A) Stones on the Table
//
//  Created by S M HEMEL on 11/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char a[n+1];
    scanf("%s",a);
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(a[i+1]==a[i])
            ans++;
    }
    printf("%d\r\n",ans);
    return 0;
}
