//
//  main.cpp
//  Codeforces Round #499 (Div. 2) - B
//
//  Created by S M HEMEL on 26/7/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long int
#include <string>
#include <set>
#include <vector>
#include <map>
using namespace std;
typedef vector <int> v;
int ar[111];
v cnt(211);
string s;
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> ar[i];
        cnt[ar[i]]++;
    }
    for(int i=1; i<109; i++){
        v f = cnt;
        for(int k=0; k<n; k++){
            bool done = false;
            for(int x=1; x<=100; x++)
                if(f[x]>=i){
                    f[x] -=i;
                    done = true;
                    break;
                }
            if(!done){
                cout << i-1 << endl;
                return 0;
            }
        }
    }
    return 0;
}
