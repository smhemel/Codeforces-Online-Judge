//
//  main.cpp
//  Codeforces Round #460 (Div. 2) - B. Perfect Number
//
//  Created by S M HEMEL on 1/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
bool check(int n){
    int ans = 0;
    while (n>=1) {
        ans += n%10;
        n /= 10;
    }
    if(ans==10) return true;
    return false;
}
int main(){
    int n,ans = 0;
    cin >> n;
    for(int i=19; ;i++){
        if(check(i))
            ans++;
        if(ans==n)
            return 0 * printf("%d\n",i);
    }
    return 0;
}
