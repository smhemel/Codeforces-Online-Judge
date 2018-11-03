//
//  main.cpp
//  Codeforces Round #486 (Div. 3) - B
//
//  Created by S M HEMEL on 1/6/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
struct compare {
    bool operator()(const std::string& first, const std::string& second) {
        return first.size() < second.size();
    }
};
string s[111];
vector<string> v;
compare c;
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s[i];
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end(), c);
    for(int i=1; i<n; i++){
        if(v[i-1]==v[i]) continue;
        size_t pos = 0;
        pos = v[i].find(v[i-1]);
        //cout << pos << endl;
        if(pos<0 || pos>v[i].size()){
            puts("NO");
            return 0;
        }
    }
    puts("YES");
    for(int i=0; i<n; i++){
        cout << v[i] << endl;
    }
    return 0;
}
