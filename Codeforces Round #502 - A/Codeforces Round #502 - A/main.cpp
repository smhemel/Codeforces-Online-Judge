//
//  main.cpp
//  Codeforces Round #502 - A
//
//  Created by S M HEMEL on 8/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int ar[21111];
vector<int>v;
map<int,int>M;
int main()
{
    int n,x,y,z,q;
    cin >> n;
    int c = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        cin >> x >> y >> z >> q;
        sum = x+y+z+q;
        v.push_back(sum);
        M[sum] = i+1;
        if(i==0) c = sum;
        
    }
    sort(v.begin(),v.end(),greater<int>());
    int i = 1;
    for(auto u: v){
        if(u==c){
            cout << i << endl;
            return 0;
        }
        i++;
    }
    return 0;
}
