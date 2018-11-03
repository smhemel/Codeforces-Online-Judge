//
//  main.cpp
//  Testing Round #14 - A. The Way To Home
//
//  Created by S M HEMEL on 21/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
string s;
vector<int>v;
int a[1111];
int main(){
    int n,d,cnt=0;
    cin >> n >> d;
    cin >> s;
    for(int i=0; s[i];){
        if(i==(n-1)) break;
        int j = i+d;
        if(j>(n-1))
            return 0 * printf("%d\n",++cnt);
        bool f = true;
        for(; j>i; j--){
            if(s[j]=='1'){
                i = j;
                f = false;
                break;
            }
        }
        if(f) return 0 * puts("-1");
        else cnt++;
    }
    cout << cnt << endl;
    
    return 0;
}
