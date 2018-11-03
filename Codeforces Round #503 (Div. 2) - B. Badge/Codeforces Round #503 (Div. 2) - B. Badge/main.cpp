//
//  main.cpp
//  Codeforces Round #503 (Div. 2) - B. Badge
//
//  Created by S M HEMEL on 21/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int n,j,p[1790],u[1790];
int main(){
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> p[i];
    for(int i=1; i<=n; i++) {
        for(int j=1;j<=n;j++)
            u[j]=0;
        for(j=i; u[j]<1; u[j]++,j=p[j]);
        cout << j <<" ";
    }
    return 0;
}
