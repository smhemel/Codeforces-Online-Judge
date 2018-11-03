//
//  main.cpp
//  Codeforces Round #501 (Div. 3) - B
//
//  Created by S M HEMEL on 23/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
string s,t,s_sorted, t_sorted;
vector<int>moves;
int main(){
    int n;
    cin >> n >> s >> t;
    s_sorted = s;
    t_sorted = t;
    sort(s_sorted.begin(), s_sorted.end());
    sort(t_sorted.begin(), t_sorted.end());
    if(s_sorted != t_sorted) return 0 * puts("-1");
    for(int i=0; i<n; i++)
        if(s[i] != t[i]){
            int j = i;
            while(s[j] != t[i])
                j++;
            for(int k = j-1; k >= i; k--){
                swap(s[k], s[k+1]);
                moves.push_back(k+1);
            }
        }
    cout << moves.size() << endl;
    for(auto u: moves) cout << u << " ";
    return 0;
}
