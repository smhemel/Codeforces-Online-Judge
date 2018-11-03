//
//  main.cpp
//  Hello 2018 - B
//
//  Created by S M HEMEL on 8/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<int>> v;
int main(){
    int n;
    cin >> n;
    v.resize(n);
    for(int i=0; i<n-1; i++){
        int x;
        cin >> x;
        x--;
        v[x].push_back(i+1);
    }
    for(int i=0; i<n; i++){
        if((int)v[i].size()==0) continue;
        int cnt=0;
        for(auto next: v[i]){
            if((int)v[next].size()==0) cnt++;
        }
        if(cnt<3) return 0 * puts("NO");
    }
    puts("YES");
    return 0;
}
