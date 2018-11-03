//
//  main.cpp
//  Codeforces Round #402 (Div. 2) - A
//
//  Created by S M HEMEL on 2/26/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstring>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
#include <map>
using namespace std;
std::clock_t __start;
double __duration;
void start_timer() { __start = std::clock(); }
void print_timer() {
    __duration = (std::clock() - __start) / (double)CLOCKS_PER_SEC;
    std::cout << "Duration: " << __duration << '\n';
}
int n,a;
int cnt[10];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //start_timer();
    cin >> n;
    for(int i=1; i<=n; cin >> a,cnt[a]++,i++);
    for(int i=1; i<=n; cin >> a,cnt[a]--,i++);
    int ans = 0;
    for(int i=1; i<=5; i++)
        if(abs(cnt[i])&1) return 0 * puts("-1");
        else ans += abs(cnt[i]);
    cout << ans/4 << endl;
    //print_timer();
    return 0;
}

