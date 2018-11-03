//
//  main.cpp
//  Codeforces Round #491 (Div. 2) - D
//
//  Created by S M HEMEL on 23/6/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#define ll long long int
using namespace std;
char a[2][102];
int cont[102];
int ar[211111];
int main(){
    cin >> a[0];
    cin >> a[1];
    int n = (int)strlen(a[0]);
    for(int i=0; i<n; i++){
        if(a[0][i]=='0') cont[i]++;
        if(a[1][i]=='0') cont[i]++;
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        if(cont[i]==2){
            if(i && cont[i-1]){
                cont[i] = 0;
                ans++;
            }
            else if(i<n-1 && cont[i+1]){
                cont[i] = 0;
                cont[i+1]--;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
