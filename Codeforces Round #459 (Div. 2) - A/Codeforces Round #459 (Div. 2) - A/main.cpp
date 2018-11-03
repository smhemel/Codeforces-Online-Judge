//
//  main.cpp
//  Codeforces Round #459 (Div. 2) - A
//
//  Created by S M HEMEL on 29/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
#define ll long long int
using namespace std;
long long int a[111111];
map<long long int ,long long int >m;
string s;
int main(){
    int n;
    cin >> n;
    a[1] = 1;
    a[2] = 1;
    m[1] = 1;
    for(int i=3; i<=100000; i++){
        a[i] = a[i-1]+a[i-2];
        m[a[i]] = 1;
    }
    n++;
    while(n--){
        if(m[n]==1) s += 'O';
        else s += 'o';
    }
    for(int i=(int)s.size()-2; i>=0; i--)
        cout << s[i];
}
