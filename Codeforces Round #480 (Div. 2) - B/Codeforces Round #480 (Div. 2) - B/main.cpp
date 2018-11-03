//
//  main.cpp
//  Codeforces Round #480 (Div. 2) - B
//
//  Created by S M HEMEL on 8/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
char s[111][111];
int main() {
    int n,x;
    cin >> n >> x;
    for(int i=0; i<4; i++)
        for(int j=0; j<n; j++)
            s[i][j]='.';
    int k=1,j = n-2;
    if(x>=1){
        s[1][n/2] = '#';
        x--;
    }
    while(x){
        if(x==1){
            x = 0;
            s[2][n/2] = '#';
            break;
        }
        if(s[1][k]=='.' && x>1){
            x -= 2;
            s[1][k] = '#';
            s[1][j] = '#';
        }
        if(s[2][k]=='.' && x>1){
            x -= 2;
            s[2][k] = '#';
            s[2][j] = '#';
        }
        k++;
        j--;
    }
    if(x) return 0 * puts("NO");
    puts("YES");
    for(int i=0; i<4; i++){
        for(int j=0; j<n; j++)
            cout << s[i][j];
        cout << endl;
    }
    return 0;
}
