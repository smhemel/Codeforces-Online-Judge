//
//  main.cpp
//  Codeforces Round #402 (Div. 2) - B. Weird Rounding
//
//  Created by S M HEMEL on 2/26/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstring>
#include <string>
using namespace std;
std::clock_t __start;
double __duration;
void start_timer() { __start = std::clock(); }
void print_timer() {
    __duration = (std::clock() - __start) / (double)CLOCKS_PER_SEC;
    std::cout << "Duration: " << __duration << '\n';
}
int n,cnt,cnt1;
string a;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //start_timer();
    cin >> a >> n;
    for(long int i=a.size()-1; i>=0; i--) {
        if(a[i]=='0'){
            cnt++;
            if(cnt==n) break;
        }
        else
            cnt1++;
    }
    if(cnt<n)
        cout << a.size()-1 <<endl;
    else
        cout<<cnt1<<endl;
    //print_timer();
    return 0;
}

